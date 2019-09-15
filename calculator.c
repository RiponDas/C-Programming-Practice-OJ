#include<stdio.h>
main()
{
    double a,b,sum,sub,mul,div;
    printf("Please enter the first number:");
    scanf("%lf",&a);
    printf("Please enter the another number:");
    scanf("%lf",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("The summation is:%lf+%lf=%lf\n",a,b,sum);
    printf("The subtruction is:%lf-%lf=%lf\n",a,b,sub);
    printf("The multiplication is:%lf*%lf=%lf\n",a,b,mul);
    printf("The dividation is:%lf/%lf=%lf/n",a,b,div);
}
