#include <stdlib.h>
#include <stdio.h>
#include "flexpret_timing.h"
#include "flexpret_io.h"
#include "flexpret_threads.h"

uint32_t a=0;
uint32_t *b;
int allocator(void)
{
 // int i=0;
 // while(i<5)
 // {
   // i++;
   // debug_string(itoa_hex(i));
   // debug_string("\n");
 // }

 uint32_t *b;
 b=malloc(sizeof(uint32_t));
 b=&a;
 debug_string(itoa_hex(*b)); 
 return 1;
}

int deallocator(void)
{
 debug_string("De allocating");
 b=NULL;
 return 1;
}



int main() {
    hwthread_start(1, allocator, NULL);
    hwthread_start(2, deallocator, NULL);
    set_slots(SLOT_T0, SLOT_T1, SLOT_T2,SLOT_D,SLOT_D, SLOT_D, SLOT_D,SLOT_D); // tid 0, 1, 2 round robin
    set_tmodes_4(TMODE_HZ, TMODE_HA, TMODE_HA, TMODE_HA); // all hard+active
    while((hwthread_done(1) & hwthread_done(2)) == 0);
    gpo_set_0(3);
    return 1;
}


