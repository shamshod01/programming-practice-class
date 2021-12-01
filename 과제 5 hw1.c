#include "stdio.h"
#include "stdlib.h"
#include "time.h"


char* to_word( int a){
  if( a == 0) return "Rock";
  else if(a == 1) return "Scissors";
  else return "Paper";
}

int main(void) {
  int u =0, pc =0;
  scanf("%d", &u);
  u = u%3;
  srand(time(NULL));
  pc = rand() % 3;

  if((u == 0 && pc == 1) || (u == 1 && pc == 2) || (u == 2 && pc == 0)) {
    printf("%s %s Win", to_word(u), to_word(pc));
  }
  else if(u == pc) {
    printf("%s %s Draw", to_word(u), to_word(pc));
  }
  else {
     printf("%s %s Lose", to_word(u), to_word(pc));
  }
  return 0;
}