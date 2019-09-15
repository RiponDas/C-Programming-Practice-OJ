#include<stdio.h>
#define PI 3.1416
#include<conio.h>
main()
{


    system("color f9");
    int n;
    xx:
    printf("For calculating about circle press 1:\n");
    printf("For calculating about rectangle press 2:\n");
    printf("For calculating about triangle press 3:\n");
    scanf("%d",&n);
    if(n==1)
    {
        float r,a,c;
        printf("please enter the radius of circle:");
        scanf("%f",&r);
        a=PI*r*r;
        c=2*PI*r;
        printf("The area of the circle is:%f\n",a);
        printf("The circumference of the circle is:%f\n",c);
    }
    else if(n==2)
    {float b,h,a,c;
        printf("please enter the base and height of the rectangle:");
        scanf("%f %f",&b,&h);
        a=b*h;
        c=2*(b+h);
        printf("The area of the rectangle is:%f\n",a);
        printf("The circumference of the rectangle is:%f\n",c);
    }
    else if(n==3)
        {
            float a,b,h;
            printf("please enter the base and height of the triangle:");
            scanf("%f %f",&b,&h);
            a=0.5*(b*h);
            printf("The area of the triangle is:%f\n",a);
        }

        else
        {
            printf("You entered the wrong number.\n");
        }
        goto xx;
    }
