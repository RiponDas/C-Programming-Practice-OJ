#include<stdio.h>
int sum(void);
void main(void)
{
    printf("The summation is:%d",sum());
}
int sum(void)
{
    int a,b,c;
    printf("Enter two values:");
    scanf("%d %d",&a,&b);
    c=a+b;
   /* printf("The summation is:%d",c);*/
   return c;
}
