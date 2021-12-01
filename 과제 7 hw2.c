#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char**a, char**b);
void bubble_sort(char* words[10]);

int main(void)
{
  char* words[10]= {
    "computer", "windows", "window", "linux", "apple", "banana", "time", "help", "game", "money"};
  bubble_sort(words);
  for(int i=0; i<10; i++){
    printf("%s\n", words[i]);
  }

}

void swap(char**a, char**b)
{
  char *temp;
  temp=*a;
  *a=*b;
  *b=temp;
}

void bubble_sort(char* words[10])
{
  int i,j;
  for (i=0; i<=9; i++){
    for(j=0; j<9-i; j++){
      if ((strlen(words[j]) > strlen(words[j+1]))){
          swap(&words[j], &words[j+1] );
        }
      if((strlen(words[j]) == strlen(words[j+1])))
      {
        if(strcmp(words[j],words[j+1])>0)
        {
          swap(&words[j], &words[j+1] );
        }
      }
    }
  }
}