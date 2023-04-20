#include <stdio.h>
#include <string.h>

int main()
{
    int i, n, len1, len2, temp;
    char a[101], b[101], c[201];

    scanf("%s %s", a, b);

    {
        len1 = strlen(a);
        len2 = strlen(b);
        printf("%d %d\n", len1, len2);
    }

    {
        strcpy(c, a); // Make a copy of a
        strcat(c, b); // Concatenate b to the copy of a
        printf("%s\n", c);
    }

    {
        temp = a[0];
        a[0] = b[0];
        b[0] = temp;
        printf("%s %s", a, b);
    }

    return 0;
}