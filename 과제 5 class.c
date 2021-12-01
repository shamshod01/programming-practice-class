#include "stdio.h"
#include <stdarg.h>
#include "stdlib.h"
#include "time.h"

int max(int a, int b) {
  int ret = a;
  if(a < b) ret = b;
  return ret;
}

void sum(int num, ...) {
  va_list ap;
  va_start(ap, num);
  int sum = 0;
  for(int i = 0; i< num; i++) {
    sum += va_arg(ap, int);
  }
  va_end(ap);
  printf("%d\n", sum);
}

int win


int main(void) {
  int a =0, b =0, c= 0;
  //scanf("%d%d%d", &a, &b, &c);
  //printf("%d\n", max(max(a, b));
  //sum(1,2,3,4);
  
  srand(time(NULL));
  for(int i = 0; i< 10; i++){
   // double d = (double)rand()/RAND_MAX;
    a = rand() % 3;
    printf("%d\n", a);
  }

  return 0;
}