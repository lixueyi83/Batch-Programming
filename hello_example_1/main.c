#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int current_time(void)
{
  time_t now;
  time(&now);
 
  printf("%s", ctime(&now));
 
  return EXIT_SUCCESS;
}

int main(void)
{
	printf("\n\n*** Hello, C Programming Language! ***\n\n");
	printf("----------------------------------------\n");
	printf("File Name: %s\n", __FILE__);
	printf("Function Name: %s\nLine Number: %d\n",__func__, __LINE__);
	
	current_time();
	
	printf("--------------the end of the program----------------\n\n");
}