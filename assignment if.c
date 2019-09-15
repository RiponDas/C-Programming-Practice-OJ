#include<stdio.h>
#include<conio.h>
#define PI 3.1416
void main()
{
    int i;
    float r,area,cir,b,c;
    xx:
    printf("\nPlease enter 1 for circle:\n");
    printf("Please enter 2 for Triangle:\n");
    printf("Please enter 3 for Rectangle:");
    scanf("%d",&i);
    if(i==1)
    {
     printf("\nPlease enter 1 for Area:");
     printf("\nPlease enter 2 for Circumference:");
     scanf("%d",&i);
     if(i==1)
     {
        printf("Enter the Radius of circle:");
        scanf("%f",&r);
        area=PI*r*r;
        printf("\nArea is:%f",area);
        goto xx;
     }
     else if(i==2)
     {
        printf("Enter the radius of the circle");
        scanf("%f",&r);
        cir=2*PI*r;
        printf("\nCircumference is:%f",cir);
        goto xx;
     }
     else{
        printf("\nInvalid keyword.");
     }
    }
    else if(i==2)
    {
     printf("\nPlease enter 1 for Area:");
     printf("\nPlease enter 2 for Circumference:");
     scanf("%d",&i);
     if(i==1)
     {
        printf("Enter height of the triangle:");
        scanf("%f",&r);
        printf("Enter base of the triangle:");
        scanf("%f",&b);
        area=(r*b)/2;
        printf("\nArea is:%f",area);
        goto xx;
     }
     else if(i==2)
     {
        printf("Enter the value of a:");
        scanf("%f",&r);
        printf("Enter the value of b:");
        scanf("%f",&b);
        printf("Enter the value of c:");
        scanf("%f",&c);
        cir=r+b+c;
        printf("\nCircumference is:%f",cir);
        goto xx;
     }
     else{
        printf("\nInvalid keyword.");
     }
    }
    else if(i==3)
    {
     printf("\nPlease enter 1 for Area:");
     printf("\nPlease enter 2 for Circumference:");
     scanf("%d",&i);
     if(i==1)
     {
        printf("Enter the value of a:");
        scanf("%f",&r);
        printf("Enter the value of b:");
        scanf("%f",&b);
        area=r*b;
        printf("Area of Rectangle is:%f",area);
        goto xx;
     }
     else if(i==2)
     {
        printf("Enter the value of a:");
        scanf("%f",&r);
        printf("Enter the value of b:");
        scanf("%f",&b);
        cir=2*(r+b);
        printf("\nCircumference is:%f",cir);
        goto xx;
     }
     else{
        printf("\nInvalid keyword.");
     }
    }
    else{
        printf("\nYou enter wrong number.");
    }
}
