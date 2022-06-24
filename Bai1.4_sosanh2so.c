#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap a, b:\n");
	scanf("%d%d", &a,&b);
	
	if(a == b){
		printf("hai so bang nhau\n");
	}else if(a < b){
		printf("%d < %d", a,b);
	}else{
		printf("%d > %d", a,b);
	}
	return 0;
}
