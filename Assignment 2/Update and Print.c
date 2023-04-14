#include <stdio.h>

int main()
{

    int i, n, t, s;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d %d", &t, &s);
    for (i = 0; i < n; i++)
    {
        if (i == t)
        {
            a[i] = s;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
