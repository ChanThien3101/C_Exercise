#include<stdio.h>
int main(){
	int a, b;
	printf("Nhap a,b: \n");
	scanf("%d%d",&a,&b);
	int sum = a + b;
	int mul = a * b;
	int sub = a - b;
	
	printf("%d + %d + %d\n", a, b, sum);
	printf("%d * %d + %d\n", a, b, mul);
	printf("%d - %d + %d\n", a, b, sub);
	
	if(b==0){
		printf("Khong thuc hien duoc phep chia \n");
	}else{
		float div = (float) a/b; //ep kieu tuong minh
		printf("%d / %d = %0.2f", a,b,div);
	}
	return 0;
}
