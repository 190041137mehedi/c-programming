#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (c >= 48 && c <= 64)
        printf("IS DIGIT", c);
    else if (c >= 65 && c <= 96)
        printf("ALPHA\nIS CAPITAL", c);
    else if (c >= 97 && c <= 122)
        printf("ALPHA\nIS SMALL", c);
}