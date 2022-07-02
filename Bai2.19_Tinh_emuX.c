#include <stdio.h>
int main(int argc, char const *argv[])
{
    double a, x;
    printf("Nhap x va a: ");
    scanf("%lf%lf", &x, &a);
    long long kGiaiThua = 1;
    int k = 0;
    double xMuK = 1;
    double kQ = 0;
    double tam = xMuK / kGiaiThua;
    while (tam > a)
    {
        kQ += tam;
        k++;
        xMuK *= x;
        kGiaiThua *= k;
        tam = xMuK / kGiaiThua;
    }
    printf("e^%0.2lf = %lf", x, kQ);
    return 0;
}
