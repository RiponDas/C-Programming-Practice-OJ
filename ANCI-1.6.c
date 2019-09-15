#include<stdio.h>
int mul(int x,int y);
main()
{
    int a,b,c;
    a=10;
    b=5;
    c=mul(a,b);
    printf("%d",c);
}
int mul(int x,int y)
{
    int p;
    p=x*y;
    return (p);
}
