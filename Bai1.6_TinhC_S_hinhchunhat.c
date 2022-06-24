#include<stdio.h>
int main(){
	float width, height;
	printf("Nhap 2 canh: \n");
	scanf("%f%f", &width, &height);
	if(width > 0 && height > 0){
		float c = (width + height) * 2;
		float a = width * height;
		printf("chu vi: %0.3f\n", c);
		printf("Dien tich: %0.3f", a);
	}else{
		printf("Nhap canh > 0");
	}
	return 0;
}
