// Explain about pass by value and pass by reference with an example.

#include<stdio.h>
void fun(int* p)
{
    *p=200;
}
int main()
{
    int x=100;
    fun(&x);
    printf("%d",x);
    return 0;
}
