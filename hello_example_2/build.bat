@echo.	                
@echo	***************************Program started***************************  
@echo.	
@echo off


set path=C:\mingw\bin;%path%
set CFLAG=-g -o
set TARGET=main

choice /c 12 /m "Make a Choice: 1- compile c source file; 2-  compile c++ source file"
IF %errorlevel%==1 goto :C_Complier 
IF %errorlevel%==2 goto :C++_Compiler

:C_Complier
set CC=gcc
set SOURCE=main.c
goto Compile_Link

:C++_Compiler
set CC=g++
set SOURCE=main.cpp
goto Compile_Link


:Compile_Link
@echo ---------------------------------------------------
@echo *** compiler: %CC%
@echo *** source file: %SOURCE%
@echo ---------------------------------------------------
@echo *** compiling and linking...
%CC% %CFLAG% %TARGET% %SOURCE% array.c pointer.c math.c restart.c
if exist main.exe (@echo *** main.exe was created) else (@echo *** main.exe was not created)
goto Run

:Run
@echo ---------------------------------------------------
set /p RunProgram=Press any key to run...
if exist main.exe (main.exe) else (@echo main.exe is not found)
goto end

:end

cmd




