#include <stdio.h>
int main(int argc, char const *argv[])
{
    long n;
    printf("Nhap n: ");
    scanf("%ld", &n);
    long m = n;
    long reverse = 0;
    while (m > 0)
    {
        reverse = reverse * 10 + m % 10;
        m /= 10;
    }
    if (reverse == n)
    {
        printf("%ld la so thuan nghich\n", n);
    }
    else
    {
        printf("%ld khong la so thuan nghich\n", n);
    }

    return 0;
}
