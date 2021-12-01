#include<stdio.h>    
 
int bits_to_decimal(int);
void decimal_to_bits(int);

int main(void)
{  
int n1, n2;

printf("Input 1:"); scanf("%d", &n1);
printf("Input 2:"); scanf("%d", &n2);

decimal_to_bits(bits_to_decimal(n1)+bits_to_decimal(n2));
return 0;  
}


int bits_to_decimal(int binary) {
  int decimal = 0, weight = 1;
  int rem = 0;
  while(binary != 0) {
    rem = binary%10;
    decimal += rem*weight;
    binary /= 10;
     weight *=2;
  }
  return decimal;
}
void decimal_to_bits(int d) {  
  int a[10],n = d,i;    
  for(i=0;n>0;i++)    
  {    
    a[i]=n%2;    
    n=n/2;    
  }    
  
  printf("\nResult: ");
  for(i=i-1;i>=0;i--)    
  {    
    printf("%d",a[i]);    
  }
  printf(" (%d)", d);     
}
