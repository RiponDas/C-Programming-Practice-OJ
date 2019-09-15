#include<stdio.h>
main()
{
    system ("color f9");
    double a,b,c,x;
    printf("please enter the first number:");
    scanf("%lf",&a);
     printf("please enter the second number:");
    scanf("%lf",&b);
    printf("please enter the third number:");
    scanf("%lf",&c);
    x=((a*c)/(b-c));
    printf("the result is:%lf",x);

}
