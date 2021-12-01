#include <stdio.h>

#define STACK_SIZE 20

void push(int*, int);
int pop(int*);
void print_stack(int*);

int stk[STACK_SIZE];
int top = -1;

int main (void) 
{
  push(stk, 1);
  push(stk, 3);
  push(stk, 5);
  push(stk, 7);
  print_stack(stk);

  return 0;
}


void push(int* arr, int data) {
  if(top == STACK_SIZE) {
    printf("Stack over flow");
    return;
  }
  top++;
  arr[top] = data;
}
int pop(int* arr) {
  if(top == -1) {
    return top;    
  }
  int data = arr[top];
  arr[top] = 0;
  top--;
  return data;
}
void print_stack(int* arr) {
  for (int i = top; i>=0;i--) {
    printf(" %d \n", pop(arr));
  }
}
