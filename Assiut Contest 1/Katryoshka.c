#include <stdio.h>

int main()
{
    long long int e, m, b, k = 0;
    scanf("%lld %lld %lld", &e, &m, &b);

    if (e >= 1 && m >= 1 && b >= 1)
    {
        e = e - m;
        b = b - m;
        k = m;
    }
    {
        if (e >= 2 && b >= 1)
        {
            e = e / 2;
        }
        {
            if (e < b)
            {
                k = k + e;
            }
            else
            {
                k = k + b;
            }
        }
    }
    printf("%lld", k);

    return 0;
}