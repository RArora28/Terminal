#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define rep(i, a, b) for(i = a; i < b; i++) 
#define rev(i, a, b) for(i = a; i > b; i--) 
#define Delimiters " \t\r\n\a"
extern char *Home;

int pwd() { 
  char *CurrDir = (char *)malloc(1000*sizeof(char)); 
  getcwd(CurrDir, 1000); //returns the current directory 
  printf("%s\n", CurrDir);
  free(CurrDir);
  return 1;
}
