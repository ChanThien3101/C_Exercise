#include <stdbool.h>
int sumAllDigits(int n)
{
    if (n < 10)
    {
        return n;
    }
    else
    {
        return n % 10 + sumAllDigits(n / 10);
    }
}
int main()
{
    int result = sumAllDigits(999999);
    printf("Tong: %d", result);
    return 0;
}