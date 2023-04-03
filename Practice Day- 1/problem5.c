#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    if (x > 25400)
    {
        printf("Gucci Bag\n Gucci Belt");
    }
    else if (x > 20000)
    {
        printf("Gucci Bag");
    }
    else if (x > 6500)
    {
        printf("Levis Bag");
    }
    else
    {
        printf("Something");
    }
}