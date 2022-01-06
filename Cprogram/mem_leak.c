/**
 *
 *
 * This program will cause the memmory leak.
 *
 * we can detect memory leaks using valgrind and
 * 				    address-sanitizer tools 
 *
 *
 */



#include <stdio.h>
#include <stdlib.h>


int main()
{
	int *ptr;

	ptr = (int *)malloc(20*sizeof(int));

	return 0;
}

