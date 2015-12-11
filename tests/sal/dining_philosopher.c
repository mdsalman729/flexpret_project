#include "flexpret_threads.h"
#include "flexpret_timing.h"
#include "flexpret_io.h"
#define N 4

uint32_t semaphore[3]={0,0,0};
void philosopher_1(void)
 {
  //Checking for the first philosopher's left fork
  while(semaphore[0]==1);
  semaphore[0]=1;
  //Checking for the first philosopher's right fork
  while(semaphore[2]==1);
  semaphore[2]=1;
   
  debug_string("Philosopher 1 eating");
  semaphore[0]=0;
  semaphore[2]=0;
 }
 void philosopher_2(void)
 {
  //Checking for second philosopher's left fork   
  while(semaphore[0]==1);
  semaphore[0]=1;
  //Checking for second philosopher's right fork
  while(semaphore[1]==1);
  semaphore[1]=1;

  debug_string("Philosopher 2 eating");
  semaphore[0]=0;
  semaphore[1]=0;

 }
 void philosopher_3(void)
 {
  //Checking for third philosopher's left
  while(semaphore[1]==1);
  semaphore[1]=1;
  //Checking for third philosoper's right
  while(semaphore[2]==1);
  semaphore[2]=1;
  debug_string("Philosopher 3 eating");
  semaphore[1]=0;
  semaphore[2]=0;
 }
int main()
{
    	hwthread_start(1, philosopher_1, NULL);
    	hwthread_start(2, philosopher_2, NULL);
        hwthread_start(3, philosopher_3, NULL);
    	set_slots(SLOT_T0, SLOT_T1, SLOT_D, SLOT_T2, SLOT_D, SLOT_D, SLOT_T3,SLOT_D); // tid 0, 1, 2 round robin
    	set_tmodes_4(TMODE_HZ, TMODE_HA, TMODE_HA, TMODE_HA); // all hard+active
    	while((hwthread_done(1) & hwthread_done(2)) == 0);     
  
  gpo_set_0(3);
  return 1;
}
