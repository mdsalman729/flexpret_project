#include "flexpret_threads.h"
#include "flexpret_timing.h"
#include "flexpret_io.h"

volatile unsigned int writer_lock=0;
volatile unsigned int lock_1=0;
volatile unsigned int lock_2=0;
void reader_1(void)
 {
   while(writer_lock==1);
   lock_1=1;
   unsigned int    a[11];
   int             i, j, temp;

        a[0] = 0;               /* assume all data is positive */
        a[1] = 11;
        a[2] = 10;
        a[3] = 9;
        a[4] = 8;
        a[5] = 7;
        a[6] = 6;
        a[7] = 5;
        a[8] = 4;
        a[9] = 3;
        a[10] = 2;
        i = 2;
        while (i <= 10) {
                           j = i;
                           while (a[j] < a[j - 1]) {
				  temp = a[j];
	                          a[j] = a[j - 1];
        	                  a[j - 1] = temp;
                	          j--;
                }
         i++;
     }
  gpo_read_0();
  debug_string("reader_1");
  lock_1=0;
 }
 int fac(int n)
{
        if (n == 0)
                return 1;
        else
                return (n * fac(n - 1));
}

 int reader_2(void)
 {
   while(writer_lock==0);
   lock_2=1;
   int i;
   int s = 0;
        for (i = 0; i <= 5; i++)
                s += fac(i);

        //return (s);
   gpo_read_0();
   debug_string("reader_2");
   lock_2=0;
 }
 int writer(void)
 {
    while(lock_1==1 || lock_2==1);
    writer_lock=1;
    gpo_write_0(0x1);
    debug_string("Writer");
    writer_lock=0;
    return 1;
}
int main()
{
    	hwthread_start(1, reader_1, NULL);
    	hwthread_start(2, writer, NULL);
        hwthread_start(3, reader_2,NULL);
    	set_slots(SLOT_T0, 1, 2, SLOT_D, 3, SLOT_D, SLOT_D,SLOT_D); // tid 0, 1, 2 round robin
    	set_tmodes_4(TMODE_HA, TMODE_HA, TMODE_HA, TMODE_HA); // all hard+active   	
        while((hwthread_done(1) & hwthread_done(2)& hwthread_done(3)) == 0);
      
  

//  debug_string(itoa_hex(count));
  gpo_set_0(3);
  return 1;
}
