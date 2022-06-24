#include<stdio.h>
#include<math.h>
int main() {
	float a,b,c;
	printf("Nhap a,b,c:\n");
	scanf("%f%f%f", &a,&b,&c);
	if(a>0 && b>0 && c>0) {
		//c1:
		if(abs(a-c)<b &&  b < (a+c)) {
			printf("Ba so lap thanh tam giac\n");
		} else {
			printf("Ba so khong lap thanh tam giac\n");
		}

		//c2:
		if (a< b+c && b < a+c && c  < b+a) {
			printf("Ba so lap thanh tam giac\n");
		} else {
			printf("Ba so khong lap thanh tam giac\n");
		}
	} else {
		printf("Nhap vao 3 so duong");
	}
	return 0;
}
