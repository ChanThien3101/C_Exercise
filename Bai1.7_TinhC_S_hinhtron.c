#include<stdio.h>
int main(){
	float r;
	const float PI = 3.141592f;

	printf("Nhap  r:\n");
	scanf("%f", &r);
	if(r<=0){
		printf("Nhap r > 0");
	}else{
		printf("Chu vi duong tron ban kinh %0.1f la: %0.3f\n",r, 2*PI*r);
		printf("Dien tich duong tron ban kinh %0.1f la: %0.3f", r, PI*r*r);
	}
		return 0;
}
