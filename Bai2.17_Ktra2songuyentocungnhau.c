#include <stdio.h>
// chi xet so duong
int main(int argc, char const *argv[])
{
    int m, n;
    printf("Nhap m, n > 0: ");
    scanf("%d%d", &m, &n);
    if (m > 0 && n > 0)
    {
        while (m != n)
        {
            if (m > n)
            {
                m = m - n;
            }
            else
            {
                n = n - m;
            }
        }
        if (m == 1)
        {
            printf("Hai so nguyen to cung nhau");
        }
        else
        {
            printf("KHONG phai hai so nguyen to cung nhau");
        }
    }
    else
    {
        printf("khong hieu tieng nguoi a");
    }

    return 0;
}
