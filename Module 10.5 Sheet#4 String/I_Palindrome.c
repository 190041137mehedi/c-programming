#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char a[1001];
    scanf("%s", a);

    int len = strlen(a);
    bool palindrome = true;
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (a[i] != a[j])
        {
            palindrome = false;
            break;
        }
    }
    if (palindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
