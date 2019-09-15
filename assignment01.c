#include<stdio.h>
#include<conio.h>
#define PI 3.1416
void main()
{
    int i;
    float r,area,cir,b,c;
    xx:
    printf("\n\nPlease enter 1 for circle:");
    printf("\nPlease enter 2 for triangle:");
    printf("\nPlease enter 3 for Rectangle:");
    scanf("%d",&i);
    switch(i)
    {
case 1:
        printf("\nPress 1 fo Area of Circle.");
        printf("\nPress 2 fo Circumference.");
        scanf("%d",&i);
        switch(i)
        {
        case 1:
            printf("Enter the Radius of circle:");
            scanf("%f",&r);
            area=PI*r*r;
            printf("\nArea is:%f",area);
            goto xx;
            break;
        case 2:
            printf("Enter the radius of the circle");
            scanf("%f",&r);
            cir=2*PI*r;
            printf("\nCircumference is:%f",cir);
            goto xx;
            break;
        default:
            printf("You entered a wrong number.");
        }
        break;
    case 2:
        printf("\nPress 1 fo Area of Triangle:");
        printf("\nPress 2 fo Circumference of triangle:");
        scanf("%d",&i);
        switch(i)
        {
        case 1:
            printf("Enter height of the triangle:");
            scanf("%f",&r);
            printf("Enter base of the triangle:");
            scanf("%f",&b);
            area=(r*b)/2;
            printf("\nArea is:%f",area);
            goto xx;
            break;
        case 2:
            printf("Enter the value of a:");
            scanf("%f",&r);
            printf("Enter the value of b:");
            scanf("%f",&b);
            printf("Enter the value of c:");
            scanf("%f",&c);
            cir=r+b+c;
            printf("\nCircumference is:%f",cir);
            goto xx;
            break;
        default:
            printf("You entered a wrong number.");
        }
        break;
    case 3:
        printf("\nPress 1 for Area of Rectangle:");
        printf("\nPress 2 for Circumference of Rectangle:");
        scanf("%d",&i);
        switch(i)
        {
        case 1:
            printf("Enter the value of a:");
            scanf("%f",&r);
            printf("Enter the value of b:");
            scanf("%f",&b);
            area=r*b;
            printf("Area of Rectangle is:%f",area);
            goto xx;
            break;
        case 2:
            printf("Enter the value of a:");
            scanf("%f",&r);
            printf("Enter the value of b:");
            scanf("%f",&b);
            cir=2*(r+b);
            printf("\nCircumference is:%f",cir);
            goto xx;
            break;
        default:
            printf("You entered a wrong number.");
        }
        break;
    default:
        printf("You enter an invalid number.");
    }
}
