
#在Path变量值里添加：; C:\MinGW\include
#LIBRARY_PATH = C:\MinGW\lib
#C_INCLUDE_PATH = C:\MinGW\include
#PATH = C:\MinGW\bin;%PATH%

CC = gcc
OBJS = main.o array.o math.o pointer.o restart.o

main:$(OBJS)
	$(CC) -g -o main $(OBJS)
	@main.exe
	
%.o:%.c
	@echo compiling $<
	@$(CC) -g -Wall -o $@ -c $<
	
clean:
	del *.o *.exe
	