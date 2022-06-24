#include<stdio.h>
#include<math.h>
int main() {
	float a,b,c,x,x1,x2,delta;
	printf("Nhap a,b,c:\n");
	scanf("%f%f%f", &a, &b, &c);
	if(a==0) { //pt bac nhat
		if(b==0 && c!= 0) {
			printf("PTVN\n");
		} else if(b==0 && c == 0) {
			printf("PT VSN\n");
		} else {
			x = -c/b;
			printf("Nghiem cua phuong trinh la %0.2f\n", x);
		}
	} else {
		delta = b*b - 4*a*c;
		if(delta < 0) {
			printf("PTVN");
		} else if(delta == 0) {
			x = -b/(2*a);
			printf("pt co nghiem kep = %0.2f\n", x);
		} else {
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			printf("PT co nghiem x1 = %0.2f, x2 = %0.2f", x1,x2);
		}
	}
	return 0;
}
