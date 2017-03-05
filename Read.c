#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define rep(i, a, b) for(i = a; i < b; i++) 
#define rev(i, a, b) for(i = a; i > b; i--) 
#define Delimiters " \t\r\n\a"
extern char *Home;


char *Read() {

  int ind = 0;
  char *inp = malloc(sizeof(char) * 1000), c;
  
  if (!inp) {
    fprintf(stderr, "lsh: allocation error\n");
    exit(EXIT_FAILURE);
  }
  
  //read untill the end of the string 
  while(1) {
    c = getchar();
    if (c == EOF || c == '\n') {
      inp[ind] = '\0';
      //puts(inp);
      //printf("\n");
      return inp;
    }
    else inp[ind++] = c;
  }
}
