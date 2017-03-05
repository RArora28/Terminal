README
_______________________________________________________
_______________________________________________________

FEATURES SUPPORTED
-------------------------------------------------------
The shell supports cd,pwd,echo and other built in commands.
Errors are handled properly using perror.
Echo command is not the same as in the bash shell.


HOW TO COMPILE
-------------------------------------------------------

to compile run the command:-   make

HOW TO RUN
-------------------------------------------------------
run the command:- ./main
FILES
-------------------------------------------------------
cd.c:- the function to execute cd command
execute.c:- the function to execute built in commands other than pwd,cd,echo
echo.c:- the function to execute echo command
pwd.c:- the function to execute pwd command
Split.c:- the function to parse the given string of commands properly
pinfo.c:- the function to execute pinfo command (bonus)
terminal_loop.c:- the looping function in the shell
main.c:- the main loop
launch.c:- to call the built-in (non-implemented) commands 
Exit.c:- to exit the shell 

