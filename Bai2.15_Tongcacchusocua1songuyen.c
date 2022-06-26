#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("co tong cac chu so la: %d\n", sum);
    return 0;
}
