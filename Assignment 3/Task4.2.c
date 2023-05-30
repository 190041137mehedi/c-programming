// Has Return + No Parameter
#include<stdio.h>
int mul()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int m=a*b;
    return m;
}

int main()
{

    int m=mul();
    printf("%d",m);
    return 0;
}
