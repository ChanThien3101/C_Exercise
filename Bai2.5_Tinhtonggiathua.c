#include <stdio.h>
int main(int argc, char const *argv[])
{
    unsigned int n;
    unsigned long long sum = 0;
    unsigned long long gt = 1;
    printf("Nhap so nguyen duong n:\n");
    scanf("%d",&n);
    int i;
    for (i = 1; i <= n; i++)
    {
        gt *= i;
        sum += gt;
    }
    printf("SUM  = %lld\n", sum);
    return 0;
}
