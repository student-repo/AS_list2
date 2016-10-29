#include <stdio.h>

int main() {

  int i;
  for (i = 1; i<257; i++){
    printf("\033[38;5;%dm", i);
    printf("%d Hello world \n", i);
  }
  return 0;
}
