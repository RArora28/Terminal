#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define rep(i, a, b) for(i = a; i < b; i++) 
#define rev(i, a, b) for(i = a; i > b; i--) 
#define Delimiters " \t\r\n\a"
extern char *Home;

int execute(char **args, int flag) {
  if (args[0] == NULL) 
    return 1;
  if(strcmp(args[0], "cd") == 0)
    return cd(args);
  else if(strcmp(args[0], "exit") == 0)
    return Exit(args);
  else if(strcmp(args[0], "pwd") == 0)
    return pwd();
  else if(strcmp(args[0], "echo") == 0)
    return echo(args);
  else if(strcmp(args[0], "pinfo") == 0)
    return pinfo(args, Home);
  return launch(args, flag); 
}
