#include <stdio.h>
#include <readline/readline.h>

int main(void) {
  char *name = readLine("Enter your name: ");
  printf("Hello World\n");
  return 0;
}