#include <stdio.h>

int main()
{
    int x, y, add, sub, mul;
    float div;
    scanf("%d %d", &x, &y);
    add = x + y;
    sub = x - y;
    mul = x * y;
    div = (float)x / y;
    printf("%d + %d = %d\n", x, y, add);
    printf("%d - %d = %d\n", x, y, sub);
    printf("%d * %d = %d\n", x, y, mul);
    printf("%d / %d = %.2f\n", x, y, div);
}