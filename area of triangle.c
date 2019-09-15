#include<stdio.h>
void main()
{
    int a,b,c,base,h;
    float sir,area;
    printf("Enter the value of a:");
    scanf("%d",&a);
     printf("Enter the value of b:");
    scanf("%d",&b);
     printf("Enter the value of c:");
    scanf("%d",&c);
    printf("\nPlease enter the height of triangle:");
    scanf("%d",&h);
    base=b;
    area=(h*base)/2;
    sir=a+b+c;
    printf("\nCircumference is:%f",sir);
    printf("\nArea of Triangle is: %f",area);
}
