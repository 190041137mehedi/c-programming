#include <stdio.h>
#include <string.h>
int main()
{
    char a[100001];
    scanf("%s", a);
    int len = strlen(a);
    for (int i = 0; i <= len - 1; i++)
    {
        if (a[i] == ',')
        {
            a[i] = ' ';
        }
        else if (a[i] >= 'a')
        {
            a[i] = a[i] - 32;
        }
        else if (a[i] < 'a')
        {
            a[i] = a[i] + 32;
        }
    }
    printf("%s", a);
    return 0;
}