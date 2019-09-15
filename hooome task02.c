#include<stdio.h>
main()
{
    system("color f9");
    double f,c;
    printf("please enter the value of celcius:");
    scanf("%lf",&c);
    f=((9*c)/5)+32;
    printf("The value of farenhiet is:%lf",f);
}
