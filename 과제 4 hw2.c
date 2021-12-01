#include <stdio.h>

int main(void) {
  for(int i = 0; i < 5; i++){
     for(int j = 0; j < i; j++) printf(" ");
     for(int k = 9; k > i*2; k--) printf("*");
    printf("\n");
  }
  for(int i = 1; i < 5; i++){
     for(int j = 4; j > i; j--) printf(" ");
     for(int k = 0; k < i*2+1; k++) printf("*");
    printf("\n");
  }

  return 0;
}