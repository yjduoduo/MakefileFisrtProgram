#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>

int localmemory0 __attribute__ ((section("LOCALmem")))=0;
int localmemory1 __attribute__ ((section("LOCALmem")))=0;
int globalmemory __attribute__ ((section("GLOBALmem")))=0;
int main (int argc, char * argv[])
{    
   
	localmemory0 = 0x456;
	localmemory1 = 0x123;
	globalmemory = localmemory0 + localmemory1;

	return 0;
}

#if 0
//i love this one very much
int main(int argc, char **argv)
{
	printf("hello\n");
	while (1)
	{
		
		printf("hello\n");
	} 
	
	return 0;
}
#endif
