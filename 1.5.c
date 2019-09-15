#include<stdio.h>
main()
{
    double a,c,m,s;
    printf("please enter the first number:");
    scanf("%lf",&a);
    printf("please enter the second number:");
    scanf("%lf",&c);
    m=a+c;
    s=a-c;
    printf("The addition of two number is:%lf\n",m);
    printf("The subtraction of two number:%lf",s);
}
