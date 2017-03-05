#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define rep(i, a, b) for(i = a; i < b; i++) 
#define rev(i, a, b) for(i = a; i > b; i--) 
#define Delimiters " \t\r\n\a"
extern char *Home;

//exit the terminal
int Exit(char **args) {
  return 0;
}
