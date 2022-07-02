#include <stdio.h>
int main(int argc, char const *argv[])
{
    double c; // do chinh  xac a trong de
    printf("Nhap do chinh xac c: ");
    scanf("%lf", &c);
    int k = 0;
    double res = 0; // gia tri de luu 1/4 so PI
    int signal = -1;
    double dk = 1.0 / (2 * k + 1); // ep kieu sang so thuc
    while (dk >= c)
    {
        dk = 1.0 / (2 * k + 1);
        res += -1 * signal * dk;
        signal *= -1;
        k++;
    }
    double PI = 4 * res;
    printf("PI = %0.8lf", PI);

    return 0;
}
