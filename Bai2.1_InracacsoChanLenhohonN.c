#include<stdio.h>
int main(){
	int n;
	printf("Nhap n>0: " );
	scanf("%d", &n);
	if(n<=0){
		printf("Nhap n lon hon 0,  khong hieu tieng viet a??");
	}else{
		int i;
		printf("Cac so chan: \n");
		for(i=0; i<n; i+=2){
			printf("%d\t",i);
		}
		printf("\n");
		printf("Cac so le: \n");
		for(i=1; i<n; i+=2){
			printf("%d\t",i);
		}
	}
	return 0;
}
