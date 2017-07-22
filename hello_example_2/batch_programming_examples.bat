@echo.	                
@echo	***************************Hello, Batch Programming!***************************  
@echo.	
@echo off

:: Useful Environmental Variables: %CD%, %DATE%, %TIME%, %RANDOM%
::echo current path: %CD%
::echo Random Number: %RANDOM%
@echo Current Date and Time: %TIME%, %DATE%


::*******************************************main*********************************************
:main
CHOICE /C 1234567 /M "Make a Choice: 1- choice command; 2-  for command; 3- if command; 4- set command; 5- echo command; 6- Call Command; 7- Common"
IF %errorlevel%==1 goto :choice_command 
IF %errorlevel%==2 goto :for_command
IF %errorlevel%==3 goto :if_command
IF %errorlevel%==4 goto :set_command
IF %errorlevel%==5 goto :echo_command
IF %errorlevel%==6 goto :Call_command
IF %errorlevel%==7 goto :Common_study
goto Exit 


:choice_command
@echo *******************************************choice_command*********************************************
SETLOCAL
CHOICE /C ABC /M "user login: A Admin; B  usera; C userb"
IF %errorlevel%==1 goto :Admin 
IF %errorlevel%==2 goto :Domain
IF %errorlevel%==3 goto :Local
goto Exit

:Admin
echo  welcome Admin user
goto Exit

:Domain
echo  welcome Domain user
goto Exit

:Local
echo  welcome Local user
goto Exit

endlocal



:for_command
@echo *******************************************for_command*********************************************
SETLOCAL
@set LIST=1 2 3 4 5 6 7 8 9 10
@set var=1
@for %%A in (%LIST%) do (echo %%A)

goto exit
endlocal



:if_command
@echo *******************************************if_command*********************************************
SETLOCAL

set var_if="This is for testing the "if defined" statement."

set var = 8
set /p number=Please enter a number:

if %number% == 8 echo the input number equals to 8
echo this input number is not 8

if defined var_if (echo %var_if%) else (echo var_if was not found) 

if exist main.exe (del main.exe) else (echo main.exe was not found)

::call study.bat
goto exit
endlocal



:set_command
@echo *******************************************set_command*********************************************
SETLOCAL
:: 1. "set" without any argument:  display all the system environmental variables under current user;
:: 2. "set variable"(set with an variable "variable"): search all the environmental variables proceeded with the "variable";
:: 3. "set variable = (string)": assign a string value to a variable;
:: 4. "set /a variable = (arithmetic expression)": use the arithmetic operator to assign value to variable;
:: 5. "set /p variable = (input value)": To remind the user to input an value for variable;

set STRING="String can be assigned to a variable."
echo %STRING%

set var1=1
echo Primitive value: "var1" = %var1%

set /a var1+=2
echo After "/a" operator: "var1" = %var1%

set /p var2=Please enter a value for "var2":
echo Value entered: "var2" = %var2%



goto exit
endlocal




:echo_command
@echo *******************************************echo_command*********************************************
SETLOCAL

goto exit
endlocal




:Call_command
@echo *******************************************Call_command*********************************************
SETLOCAL

set string="batch file can call/invoke another batch file or itself(the effect is that of recursion)"
echo.
echo %string%
set /p presskey=please press any key to restart the process...

:: the recursive process can be obtained by goto the section that of itself or call the batch file that of itself.
:: in order to make trigger by press any key, we can use "set /p anykey=please press anykey to continue."
::	goto Call_command
::	call study.bat
echo.

goto exit
endlocal



:Common_study
@echo *******************************************Common_study*********************************************
SETLOCAL

goto exit
endlocal





:exit
@echo. *******************************************exit -> main*********************************************
goto main

cmd