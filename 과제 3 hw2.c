#include <stdio.h>

int main(void) {
  int a=0;
  scanf("%d", &a);
  a = (a+4)%26 +97;
  printf("%c", a);
  return 0;
}