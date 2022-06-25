#include <stdio.h>
void hienUoc(int n)
{
    int i = 2;
    int dainra = 1;
    while (n > 1)
    {
        if (n % i == 0)
        {
            if (dainra != i)
            {
                printf("%d ", i);
                dainra = i;
            }
            n /= i;
        }
        else
        {
            i++;
        }
    }
}
int main(int argc, char const *argv[])
{
    hienUoc(24);
    return 0;
}
