#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define rep(i, a, b) for(i = a; i < b; i++) 
#define rev(i, a, b) for(i = a; i > b; i--) 
#define Delimiters " \t\r\n\a"

extern char *Home;

int launch(char **args, int flag) {
  pid_t pid; int status;

  //creates the child process of the current process
  pid = fork();
  
  if (pid == 0) {  
    if (execvp(args[0], args) == -1) 
      perror("Error");
    exit(EXIT_FAILURE);
  }

  else if (pid < 0) perror("Error");
  
  else if(!flag)  //check for the bg and fg processes
    //do {
      waitpid(pid, &status, WUNTRACED);
  //} while (!WIFEXITED(status) && !WIFSIGNALED(status));
  
  return 1;
}
