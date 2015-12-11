#include "flexpret_threads.h"
#include "flexpret_timing.h"
#include "flexpret_io.h"
#include <string.h>	
#include <stdio.h>

uint32_t count=0;
 struct node
{
  int a;
  char *b;
  int (*func)(void);
};
struct node top;
int func()
{
  debug_string("Hello World");
  return 0;
} 

void initializer(void)
 {
    delay_until(count!=10);
    top.b="Salman";
   // strcpy(top.b,"Salman");
    top.a=10;
    top.func=func;
 }
 void set(void)
 {
  count=10;
  debug_string(top.b);
 }


int main()
{
    unsigned int i=0;
    while(i<5)
    {
    	hwthread_start(1, initializer, NULL);
    	hwthread_start(2, set, NULL);
    	set_slots(SLOT_T0, SLOT_T1, SLOT_T2, SLOT_D, SLOT_D, SLOT_D, SLOT_D,SLOT_D); // tid 0, 1, 2 round robin
    	set_tmodes_4(TMODE_HA, TMODE_HA, TMODE_HA, TMODE_HA); // all hard+active
    	while((hwthread_done(1) & hwthread_done(2)) == 0);
        i++;     
    }
  debug_string(itoa_hex(count));
  gpo_set_0(3);
  return 1;
}
