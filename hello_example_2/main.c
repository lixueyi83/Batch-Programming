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
	debug_info();
	keep_working_hard();

	return 0;
}

