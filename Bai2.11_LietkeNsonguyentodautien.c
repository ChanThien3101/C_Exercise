#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap nguyen duong n > 0: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("m khong hieu tieng viet a, oc ");
    }
    else
    {
        int count = 0;
        int m = 2;
        while (1)
        {
            int i;
            int mark = 1;
            for (size_t i = 2; i <= sqrt(m); i++)
            {
                if (m % i == 0)
                {
                    mark = 0;
                    break;
                }
            }
            if (mark == 1)
            {
                count++; // them 1 so nguyen to
                printf("%d  ", m);
            }
            if (count >= n)
            {
                break;
            }

            m++;
        }
    }
    return 0;
}
