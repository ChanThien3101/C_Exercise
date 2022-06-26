#include <stdio.h>
#include <conio.h>
int Fibonacci(int n)
{

    {
        if (n == 1 || n == 2)
            return 1;
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Nhap n lon hon 0\n");
    }
    else
    {
        printf("So Fibonacci thu %d la: %d", n, Fibonacci(n));
    }

    return 0;
}
