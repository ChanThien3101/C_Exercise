#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int m, n;
    printf("nhap m >= 0, n > m: ");
    scanf("%d%d", &m, &n);
    if (m >= 0 && n > m)
    {
        int start = sqrt(m);
        start = (start * start == m) ? start : start + 1;
        int end = sqrt(n);
        int i;
        for (i = start; i <= end; i++)
        {
            printf("%d ", i * i);
        }
    }
    else
    {
        printf("hoc lai tieng viet di");
    }

    return 0;
}
