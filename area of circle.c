#include<stdio.h>
#define PI 3.1416
void main()
{
    int r,area,sur;
    printf("Please enter the radius of circle:");
    scanf("%d",&r);
    area=(PI*r*r);
    sur=(2*PI*r);
    printf("Area is: %d\n Circumference is:%d",area,sur);
}
