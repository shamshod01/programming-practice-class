#include<stdio.h>
#include<math.h>

int count_sosu(int n);

int main(void) {
  int n = 0;

  scanf("%d", &n);
	
	printf("Count: %d\n",count_sosu(n));

  return 0;
}

int count_sosu(int n) {
	int i,m,flag,c;
	
	c = 0;

	for(m = 2;m<=n;++m){

		flag = 0;
		for(i = 2;i<=sqrt(m);++i){
			if(m%i==0){
				flag=1;
				break;
			}
		}
		
		if(flag==0){
      printf("%d is sosu \n", m);
    	++c;
    }
			
	}

  return c;
}