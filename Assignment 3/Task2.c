// Write a C program to take positive integer N as input and print a pattern shown in the sample input output.
#include <stdio.h>

int main()
{
    int n,m=1;
    scanf("%d",&n);
    if (n < 1 || n > 9) {
        return 1;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
          printf(" ");
        }
        for(int k=1;k<=m;k++)
        {
            printf("%d",k);
        }
        printf("\n");
        m++;
    }
    return 0;
}
