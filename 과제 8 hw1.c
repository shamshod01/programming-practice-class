#include<stdio.h>    
 
void print_bits(int);
void print_heximal(int);

int main(void)
{  

int a, n=0;

printf("n:"); scanf("%d", &a);
printf("<2 진수> \n");
print_bits(a);
printf("\n\n<16 진수> \n");
print_heximal(a);

return 0;  
}

void print_bits(int a) {
  for (int i =31; i>=0; i--){
    printf("%d", (a >> i) & 1);
    if(i%8 == 0) printf(" ");
  }
}

void print_heximal(int d) {
  long int rem, quo=d;
int i=7,j,temp;
char hex[8] = {0};

while(quo!=0)
{
temp = quo % 16;
if( temp < 10)
temp =temp + 48; else
temp = temp + 87;
hex[i--]= temp;
quo = quo / 16;
}

for (j = 0;j < 8;j++)
if(hex[j]){
printf("%c",hex[j]);
} else {
  printf("0");
}
}