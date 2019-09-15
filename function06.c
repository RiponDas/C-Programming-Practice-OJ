#include<stdio.h>
void mathoperation(int x,int y,int *s,int *d);
main()
{
    int x=20,y=10,s,d;
    mathoperation(x,y,&s,&d);
    printf("s=%d\n d=%d\n",s,d);
}
void mathoperation(int a,int b,int *sum,int *diff)
{
    *sum=a+b;
    *diff=a-b;
}
