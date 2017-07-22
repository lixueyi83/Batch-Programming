/**********************************************************************************
*	This file shows two ways of using pointer to function:
*	1st: define a type of pointer to function, use that type to define a var
*	2nd: get the entry address of function and then cast that address to 
*		pointer to function type
***********************************************************************************/


#include <stdio.h>
#include "common.h"

typedef void (*funcptr)(int *x, int *y);

void swap(int *x, int *y)
{
	*x = *x^*y;
	*y = *x^*y;
	*x = *x^*y;
}

void swap_ptr(int x, int y)
{
	int EntryAddr;
	funcptr p;
	
	if((int)(p = swap) == (EntryAddr = (int)&swap))
		DEBUG1(EntryAddr);
	
	DEBUG2(x,y);
	p(&x,&y);
	DEBUG2(x,y);
	(*(funcptr)EntryAddr)(&x, &y);
	DEBUG2(x,y);
}