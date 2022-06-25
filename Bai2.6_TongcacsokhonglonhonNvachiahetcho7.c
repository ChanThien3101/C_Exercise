#include <stdio.h>
int main()
{
	unsigned int n;
	unsigned long long sum = 0;
	printf("Nhap so tu nhien n:\n");
	scanf("%d", &n);
	long i;
	for (i = 7; i < n; i += 7)
	{
		sum += i;
	}
	printf("SUM: %lld", sum);
	return 0;
}
