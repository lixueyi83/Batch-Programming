#ifndef _COMMON_H_
#define _COMMON_H_


#define COMMON_EXTERN	extern

/************* Standard I/O Macros ****************/
#define SPACE()			printf("\n")
#define TRACE			printf 	
#define ERROR 			printf 	//write(1, x, strlen(x))

#define DEBUG(str,...)		printf(str, __VA_ARGS__)
#define DEBUG1(exp)			printf(#exp" = %d\n", exp)
#define DEBUG2(exp1,exp2)	printf(#exp1" = %d, "#exp2" = %d\n", exp1, exp2)

/************* Extern Functions ****************/
COMMON_EXTERN int minus(int a, int b);
COMMON_EXTERN int add(int a, int b);
COMMON_EXTERN void swap_ptr(int x, int y);
COMMON_EXTERN void keep_working_hard(void);


#endif