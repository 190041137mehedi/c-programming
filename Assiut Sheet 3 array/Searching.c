#include <stdio.h>

int main()
{

    int n, x, flag = 0;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("%d", i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("-1");
    }
    return 0;
}
