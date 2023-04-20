
#include <stdio.h>

int main()
{

    int i, n, mn, mx, mn_idx = 0, mx_idx = 0;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    mn = a[0];
    mx = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < mn)
        {
            mn = a[i];
            mn_idx = i;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
            mx_idx = i;
        }
    }

    a[mn_idx] = mx;
    a[mx_idx] = mn;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}