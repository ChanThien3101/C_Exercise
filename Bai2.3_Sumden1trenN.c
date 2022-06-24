#include<stdio.h>
int main() {
	unsigned int n;
	printf("Nhap so tu nhien n: \n");
	scanf("%d", &n);
	float sum = 0;
	unsigned int i =1;
	for(i=1; i<=n; i++) {
		sum += 1.0f/i; //ep kieu ngam dinh
	}
	printf("SUM = %0.2f", sum);
	return 0;
}
