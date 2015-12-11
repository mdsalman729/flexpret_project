#include "flexpret_threads.h"
#include "flexpret_timing.h"
#include "flexpret_io.h"
#define N 100
#include <pthread.h>
uint32_t count=0;
void producer(void)
 {
   int item;
   if(count==N) 
   delay_until(count<100);
   else
   count++;
 }
 void consumer(void)
 {
   int item;
   if(count==0)
   delay_until(count>0);
   else
   count--;
 }

int main()
{
    unsigned int i=0;
    while(i<5)
    {
    	hwthread_start(1, producer, NULL);
    	hwthread_start(2, consumer, NULL);
    	set_slots(SLOT_T0, SLOT_T1, SLOT_T2, SLOT_D, SLOT_D, SLOT_D, SLOT_D,SLOT_D); // tid 0, 1, 2 round robin
    	set_tmodes_4(TMODE_HA, TMODE_HA, TMODE_HA, TMODE_HA); // all hard+active
    	while((hwthread_done(1) & hwthread_done(2)) == 0);
        i++;     
    }
  if(count<0 || count>100)
  debug_string("Concurrency bug found");  

  debug_string(itoa_hex(count));
  gpo_set_0(3);
  return 1;
}
