#include <stdio.h>

int main()
{

    int i = 0, n;
    scanf("%d", &n);

    if (n <= 0)
    {
        for (i = n; i <= 1; i++)
        {

            printf("%d ", i);
        }
    }
    else if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {

            printf("%d ", i);
        }
    }
    return 0;
}