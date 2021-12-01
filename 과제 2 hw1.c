#include <stdio.h>

int main(void) {
  int a=0, b=0, c=0;
  double  average=0, variance=0;

  scanf("%d %d %d", &a, &b, &c);
  average = (a+b+c)/3;
  variance = ((a-average)*(a-average)+(b-average)*(b-average)+(c-average)*(c-average))/3 ;
  printf("%lf %lf", average, variance);
  return 0;
}