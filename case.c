#include<stdio.h>
#include<conio.h>
void main()
{
    int cas;
     double f,c;
    printf("Enter 1 for farenhight to celcius\n");
    printf("Enter 2 for celcius to farenheit ");
    scanf("%d",&cas);
    switch(cas)
    {
    case 1:
        {
    printf("please enter the value of celcius:");
    scanf("%lf",&c);
    f=((9*c)/5)+32;
    printf("The value of farenhight is:%lf",f);
        }
    case 2:
        {
    printf("please enter the value of farenhight:");
    scanf("%lf",&f);
    c=((5*f)-160)/9;
    printf("The value of celcius is:%lf",f);
    }
}
