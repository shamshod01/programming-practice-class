#include<stdio.h>
#include<stdlib.h>

typedef struct __node{
int data;
struct __node* next;
}node;

typedef struct __list{
  node* head;
int cnt;
}list;


void push(list*, int);
int pop(list*);
void print_stack(list*);
   

int main(){
  
  list* L = (list*)malloc(sizeof(list));
if(!L) printf("Failed to Init.\n");
  L->head = NULL;
  L->cnt = 0;
  push(L, 1);
  push(L, 3);
  push(L, 5);
  push(L, 7);
  print_stack(L);

return 0;
}


void push(list* L, int n){
  node* N = (node*)malloc(sizeof(node));
if(!N){
    printf("Failed to create a node\n");
return;
  }
  N->data = n;
  N->next = L->head;
  L->head = N;
  L->cnt++; 
}

int pop(list* L){
if(L->cnt == 0){
 return -1;
  }

  node* curr = L->head;
  int data = curr-> data;
  node* prev = NULL;
  L->head = L->head->next;
  free(curr);
  L->cnt--;
  return data;
}

void print_stack(list* L){
if(L->cnt == 0){
    printf("Empty\n");
return;
  }
  node* t = L->head;
while(t){
  int data = pop(L);
   if(data<0) {
     return;
   }
    printf("%d \n", data);
  }
}