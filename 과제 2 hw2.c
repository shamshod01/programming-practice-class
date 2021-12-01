#include <stdio.h>

int main(void) {
  double radius = 0;
  const double PI = 3.14;

  scanf("%lf", &radius);
  
  printf("%lf, %lf", PI*radius*radius*radius*4/3,4*PI*radius*radius);
  return 0;
}