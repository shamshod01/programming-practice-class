#include <stdio.h>

int main (void) {
  int student_num = 0, i = 0;
  int grade[10];
  int sum =0, greater=0;
  scanf("%d", &student_num);
  for (i=0;i<student_num; i++) {
  scanf("%d", &grade[i]);  
  }
  for (i=0; i<student_num; i++) {
      sum += grade[i];
  }
  sum /=student_num;

  for (i=0; i < student_num; i++) {
      if(grade[i]> sum) {
        greater++;
      }
  }
  printf("%d", greater);
  return 0;
}