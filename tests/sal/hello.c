#include<stdio.h>
#include "flexpret_timing.h"
#include "flexpret_io.h"
#include "flexpret_threads.h"

int loop(void)
{
 // int i=0;
 // while(i<5)
 // {
   // i++;
   // debug_string(itoa_hex(i));
   // debug_string("\n");
 // }
 uint32_t i;
 for(i=0;i<5;i++)
   debug_string(itoa_hex(i));

 debug_string("Hello World");
 return 1;
}

int print(void)
{
  uint32_t i=5;
  while( i>0)
  {
    debug_string("Bye World");
    i--;
  }
 return 1; 
}

void delay(void)
{
  //unsigned int t=get_time();
  //set_compare(t+PERIOD);
 // delay_until_periodic(&t,PERIOD);
 debug_string("delay");
}


int main() {
    hwthread_start(1, loop, NULL);
    hwthread_start(2, print, NULL);
    hwthread_start(3, delay, NULL);
    set_slots(SLOT_T0, SLOT_T1, SLOT_T2,SLOT_D,SLOT_D, SLOT_T3, SLOT_D,SLOT_D); // tid 0, 1, 2 round robin
    set_tmodes_4(TMODE_HZ, TMODE_HA, TMODE_HA, TMODE_HA); // all hard+active
    while((hwthread_done(1) & hwthread_done(2) & hwthread_done(3)) == 0);
    gpo_set_0(3);
    return 1;
}


