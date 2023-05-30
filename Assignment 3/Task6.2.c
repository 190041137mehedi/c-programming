// Explain about pass by value and pass by reference with an example.

#include<stdio.h>
void fun(int x)
{
    x=200;
}
int main()
{
    int x=10;
    fun(x);
    printf("x value is: %d\n",x);
    return 0;
}
