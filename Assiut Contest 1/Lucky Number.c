#include <stdio.h>

int main()
{
    int a, left, right;
    scanf("%d", &a);
    left = a % 10;
    right = a / 10;
    if (left % right == 0 || right % left == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}