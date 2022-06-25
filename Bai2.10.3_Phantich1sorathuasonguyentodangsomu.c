// Phân tích một số ra thừa số nguyên tố dạng số mũ
#include <stdio.h>

int main() {
	unsigned int n;
	printf("Import number n > 1: ");
	scanf("%u", &n);

	if (n < 2) {
		printf("Import n > 1");
	}
	else {
		unsigned int i = 2;
		int mark = 0;
		int count = 0;
		while (n > 1)
		{
			if (n % i == 0) 
			{
				if (mark != i) printf("%u", i);
				n /= i;
				mark = i;
				count++;
				if (n == 1) printf("^%d", count);
			}
			else {
				if (count) printf("^%d x ", count);
				i++;
				count = 0;
			}
		}
	}

	return 0;
}

// #include <stdio.h>

// // 415800 = 2^3x3^3x5^2x7^1x11^1

// int main() {
// 	unsigned int n;
// 	unsigned i = 2;
// 	printf("Nhap so duong n: ");
// 	scanf("%d", &n);
	
// 	if(n < 1) {
// 		printf("Nhap n > 0");
// 	} else if(n == 1) {
// 		printf("1 = 2^0");
// 	} else {
// 		printf("%d = ", n);
// 		int count = 0;
// 		while(n > 1) {
// 			if(n % i == 0) {
// 				count++;
// 				if(n == i) {
// 					printf("%d^%d", i, count);
// 				}
// 				n /= i;
// 			} else {
// 				if(count > 0) {
// 					printf("%d^%dx", i, count);
// 					count = 0;
// 				}
// 				i++;
// 			}
// 		}
// 	}
 	
	
// 	return 0;
// }