// No Return + Parameter
#include<stdio.h>

void mul(int x,int y)
{
    int m=x*y;
    printf("%d\n",m);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    mul(a,b);
    return 0;
}
