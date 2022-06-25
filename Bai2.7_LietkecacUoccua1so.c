#include <stdio.h>
int main()
{
    unsigned long n;
    unsigned long i;
    unsigned int counter = 0;
    printf("Nhap so tu nhien n:\n");
    scanf("%ld", &n);
    printf("Danh sach cac uoc cua %ld:\n", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%ld ", i);
            counter++;
        }
    }
    printf("\n%ld co tong so uoc la: %d", n, counter);
    return 0;
}