#include <stdio.h>

int main(void) {
  
  char c;
  int line = 0, a = 0, num = 0, space = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
    line++;
    else if (c == 'a')
    a++;
    else if (c >= '0' && c <= '9')
    num++;
    else if (c == ' ' || c == '\t')
    space++;
  }
  printf("a: %d \n", a);
  printf("num: %d \n", num);
  printf("line: %d \n", line);
  printf("space: %d \n", space);
  return 0;
}