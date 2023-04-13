#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    long long sum = 0;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("%lld\n", abs(sum));
    return 0;
}
