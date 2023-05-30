//  Has Return + Parameter:
#include<stdio.h>

int multiplication(int x,int y)
{
    int multiplication=x*y;
    return multiplication;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",multiplication(x,y));
    return 0;
}
