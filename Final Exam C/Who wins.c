#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x1 = 0, x2 = 0;
    for (int i = 0; i < n; i++)
    {
        int c, d;
        scanf("%d %d", &c, &d);
        if (c > d)
        {
            x1++;
        }
        else if (d > c)
        {
            x2++;
        }
        else if (c == d)
        {
            x1++;
            x2++;
        }
    }
    if (x1 > x2)
    {
        printf("Tiger");
    }
    else if (x1 < x2)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }

    return 0;
}
