#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "common.h"
 
int current_time(void)
{
  time_t now;
  time(&now);
 
  printf("%s", ctime(&now));
 
  return EXIT_SUCCESS;
}

void show_bytes(unsigned char * bytestart, int len)
{
	int i;
	for(i=0; i<len; i++)
		printf(" %.2x", bytestart[i]);
	printf("\n");
}

void show_int(int x)
{
	show_bytes((unsigned char *)&x, sizeof(int));
}
void show_float(float x)
{
	show_bytes((unsigned char *)&x, sizeof(float));
}
void show_pointer(void *x)
{
	show_bytes((unsigned char *)&x, sizeof(void *));
}
void show_double(double x)
{
	show_bytes((unsigned char *)&x, sizeof(double));
}
void show_max_machine_number(void)
{
	printf("The max number: 0x%x", ~0);
}

void bit_operation(void)
{
	int x = 0x98FDECBA;
	
	printf("0x%x\n", x);
	printf("0x%x\n", ~0<<8 | x);
	printf("0x%x\n", x<<8 | ~x);
	printf("0x%x\n", x<<8);	
}

void debug_info(void)
{
	printf("\n\n*** Hello, C Programming Language! ***\n");
	printf("----------------------------------------\n");
	printf("File Name: %s\n", __FILE__);
	printf("Function Name: %s\nLine Number: %d\n",__func__, __LINE__);
	
	current_time();
	
	printf("----------------------------------------\n");
}

int main(void)
{
	int x = 0x66;
	int y = 0x93;
	int z;
	
	printf("z = 0x%x\n", x==y);
	printf("z = 0x%x\n", !(x^y));
	
	return 0;
}

