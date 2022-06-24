#include<stdio.h>
int main() {
	float a,b,x;
	printf("Nhap a, b: \n");
	scanf("%f%f",&a, &b);
	if(a==0 && b!= 0) {
		printf("PTVN");
	} else if(a==0 && b == 0) {
		printf("PT VSN");
	} else {
		x = -b/a;
		printf("Nghiem cua phuong trinh la %0.2f", x);
	}
	return 0;
}
