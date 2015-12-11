#include "flexpret_threads.h"
#include "flexpret_timing.h"
#include "flexpret_io.h"

uint32_t count=0;
num_to_lcd(unsigned char a)
{
        /*
         * -0-            1            01 1   2         2   4        02  04
         * -3-    i.e.    8     i.e.   08 4   5        16   32       10  20
         * -6-           64            40
         *
         */
        switch (a) {
                case 0x00:return 0;
        case 0x01:
                return 0x24;
        case 0x02:
                return 1 + 4 + 8 + 16 + 64;
        case 0x03:
                return 1 + 4 + 8 + 32 + 64;
        case 0x04:
                return 2 + 4 + 8 + 32;
        case 0x05:
                return 1 + 4 + 8 + 16 + 64;
        case 0x06:
                return 1 + 2 + 8 + 16 + 32 + 64;
        case 0x07:
                return 1 + 4 + 32;
        case 0x08:
                return 0x7F;    /* light all */
        case 0x09:
                return 0x0F + 32 + 64;
        case 0x0A:
                return 0x0F + 16 + 32;
        case 0x0B:
                return 2 + 8 + 16 + 32 + 64;
        case 0x0C:
                return 1 + 2 + 16 + 64;
        case 0x0D:
                return 4 + 8 + 16 + 32 + 64;
        case 0x0E:
                return 1 + 2 + 8 + 16 + 64;
        case 0x0F:
                return 1 + 2 + 8 + 16;
        }
        return 0;
}
volatile unsigned char IN;
volatile unsigned char OUT;
void nspr_thread_1(void)
 {
    int             i;
    unsigned char   a;

        for (i = 0; i < 10; i++) {
                a = IN;         /* scan port */
                if (i < 5) {
                        a = a & 0x0F;
                        OUT = num_to_lcd(a);
                }
        }
        count=1;
        return 0;
 }
void nspr_thread_2(void)
 {
   delay_until(count>0);
   debug_string("Thread 2 is scheduled");
 }
void nspr_thread_3(void)
{
 
 debug_string("Thread 3 is scheduled");
 count=0;
}
int main()
{
    
    	hwthread_start(1,nspr_thread_1, NULL);
    	hwthread_start(2,nspr_thread_2, NULL);
        hwthread_start(3,nspr_thread_3, NULL);
    	set_slots(SLOT_T0,3,2,SLOT_D,SLOT_D,SLOT_D,SLOT_D,1); // tid 0, 1, 2 round robin
    	set_tmodes_4(TMODE_HA, TMODE_HA, TMODE_HA, TMODE_HA); // all hard+active
    	while((hwthread_done(1) & hwthread_done(2)) == 0);
  //debug_string(itoa_hex(count));
  //gpo_set_0(3);
  return 1;
}
