#include <stdio.h>

float read_and_calc();

int main(void)
{
  printf("result: %f\n", read_and_calc());
  return 0;
}

float read_and_calc() 
{
  char c;
  int firstDone = 0, num = 0;
  float sum = 0;
  char prev;
 
  while ((c = getchar()) != EOF) {

    if (c == '*' || c=='/'){
      firstDone = 1;
    if (prev == '*'){
      sum*=num;
      num = 0;
    }
    else if (prev == '/') {
      sum/=num;
      num=0;
    }    
      prev = c;
    }

    else if (c >= '0' && c <= '9'){
      if(firstDone) {
        num=(int)(c-'0');
      }
      else{
        sum=(int)(c-'0');
      }
    }
  }
  if (prev == '*'){
      sum*=num;
    }
    else if (prev == '/') {
      sum/=num;
    } 
  return sum;
}