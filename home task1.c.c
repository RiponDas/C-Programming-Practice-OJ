#include<stdio.h>
main()
{
    system("color f9");
    double a,b,c,x;
    printf("enter the first number-\n");
    scanf("%lf",&a);
    printf("enter the second number-\n");
    scanf("%lf",&b);
    printf("enter the third number-\n");
    scanf("%lf",&c);
    x=(a*c)/(b-c);
    printf("the result is:%lf",x);
    getch();
}
