#include<stdio.h>
main()
{
    int a;
    printf("If you want to convert from celcious to farenheight press 1:\n");
    printf("If you want to convert from farenheight to celcious press 2:\n");
    scanf("%lf",&a);
    if(a==1){
            double c,f;
        printf("Please enter the value of celcious:");
        scanf("%lf",&c);
        f=((9*c)/5)+32;
        printf("The value of farenheight:%lf",f);
    }
    else{
        double c,f;
        printf("please enter the value of farenheight:");
        scanf("%lf",&f);
        c=((5*f)-32)/9;
        printf("The value of celcious is:%lf",c);
    }
}
