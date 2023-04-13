#include <stdio.h>

int main()
{
    int n, a;
    scanf("%d", &n);
    a = n / 1000;
    if (a % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
}
