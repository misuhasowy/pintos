/* This program attempts to read kernel memory. 
   This should terminate the process with a -1 exit code. */

#include "tests/lib.h"
#include "tests/main.h"

void
test_main (void) 
{
  msg ("Congratulations - you have successfully read kernel memory: %d", 
        *(int *)0xC0000000);
  fail ("should have exited with -1");
}
//pintos -v -k -T 60 --qemu  --filesys-size=2 -p tests/userprog/bad-read2 -a bad-read2 -- -q  -f run bad-read2
