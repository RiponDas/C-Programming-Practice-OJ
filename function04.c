#include<stdio.h>
#define PI 3.1416
float area;
int circle();
void main()
{

    area=circle();
    printf("Area of circle is:%f",area);
}
int circle()
{
    float r;
     printf("Enter radius of the circle:");
     scanf("%f",&r);
     area=PI*r*r;
     return area;
}
