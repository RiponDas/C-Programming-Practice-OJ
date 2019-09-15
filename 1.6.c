#include<stdio.h>
main()
{
    int a,b,c,x;
    printf("Please enter the value of  a:");
    scanf("%d",&a);
    printf("Please enter the value of  b:");
    scanf("%d",&b);
    printf("Please enter the value of  c:");
    scanf("%d",&c);
    x=a/(b-c);
    printf("the equation is:%d/(%d-%d)=%d",a,b,c,x);
}
