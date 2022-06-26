#include <stdio.h>
int main()
{
    int n;
    printf("Nhap nguyen duong n: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("m khong hieu tieng viet a, oc ");
    }
    else
    {
        unsigned long long gt = 1;
        int i;
        for ( i = n; i >= 1; i--)
        {
            gt *= i;
        }
        printf("Ket qua: %lld", gt);
    }
    return 0;
}
