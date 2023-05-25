#include <stdio.h>

int main()
{
    char string[1001];
    int small = 0;
    int capital = 0;
    int space = 0;

    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            capital++;
        }
        else if (string[i] >= 'a' && string[i] <= 'z')
        {
            small++;
        }
        else if (string[i] == ' ')
        {
            space++;
        }
    }

    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", space);

    return 0;
}
