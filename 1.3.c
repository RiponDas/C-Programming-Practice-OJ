#include<stdio.h>
main()
{
    float p;
    double a,r;
    printf("please enter the radius of a circle:");
    scanf("%lf",&r);
    p=3.1416;
    a=(4/3)*(p*r*r);
    printf("The area of the circle is:%lf",a);
}
