#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define rep(i, a, b) for(i = a; i < b; i++) 
#define rev(i, a, b) for(i = a; i > b; i--) 
#define Delimiters " \t\r\n\a"
extern char *Home;

//change the directory 

int cd(char **args) {
  if (!args[1]) 
    fprintf(stderr, "expected argument to \"cd\"\n");
  else if(args[1][0] == '~') //switch to home directory
    chdir(Home);
  else if (chdir(args[1]))  //if switching is possible:switch; else give an error
    perror("Error");
  return 1;
}
