#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define rep(i, a, b) for(i = a; i < b; i++) 
#define rev(i, a, b) for(i = a; i > b; i--) 
#define Delimiters " \t\r\n\a"
extern char *Home;


int echo(char **args) { 
  
  int ind = 1, start = 1, end;
  
  while(args[ind] != NULL) {
    printf("%s ", args[ind]);
    ind++;
  }

  printf("\n");
  
  return 1;
}

