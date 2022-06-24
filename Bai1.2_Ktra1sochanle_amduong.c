#include<stdio.h>
int main(){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	if(n>0){
		printf("%d is a positive Integer\n",n);
	}else if (n==0){
		printf("%d is negative 0 and positive 0",n);
	}else{
		printf("%d is negative Integer\n",n);
	}
	
	if(n%2 ==0){
		printf("%d is an even number\n",n);
	}
	else {
		printf("%d is odd", n);
	}
	return 0;
}
