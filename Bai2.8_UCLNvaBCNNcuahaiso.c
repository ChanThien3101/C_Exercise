#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Nhap a, b: ");
    scanf("%d%d", &a, &b);
    if (a >= 0 && b >= 0)
    {
        if (a == 0 && b == 0)
        {
            printf("Khong ton tai UCLN, BCNN");
        }
        else if (a == 0 || b == 0)
        {
            printf("Khong co BCNN, UCLN = %d ", (a == 0) ? b : a);
        }
        else
        {
            int bc = a * b;
            // cach 1
            //  while (a != b)
            //  {
            //      if (a > b)
            //      {
            //          a = a - b;
            //      }
            //      else
            //      {
            //          b = b - a;
            //      }
            //  }

            // cach 2
            while (b != 0)
            {
                int x = b;
                b = a % b;
                a = x;
            }

            printf("UCLN = %d\n", a);
            printf("BCNN = %d\n", bc / a);
        }
    }
    else
    {
        printf("Nhap a, b > 0");
    }
    return 0;
}
