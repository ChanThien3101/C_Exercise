#include <stdio.h>
int main(int argc, char const *argv[])
{
    unsigned int n;
    printf("Nhap n: \n");
    scanf("%d", &n);
    unsigned int s = 0, s1 = 0, s2 = 0;
    unsigned int i;

    for (i = 1; i <= n; i++)
    {
        s += i;
        if (i % 2 == 0)
        {
            /* code */
            s1 += i;
        }
        else
        {
            s2 += i;
        }
    }
    printf("Tong: S = %d\n", s);
    printf("Tong chan: S1 = %d\n", s1);
    printf("Tong le: S2 = %d\n", s2);
    return 0;
}
