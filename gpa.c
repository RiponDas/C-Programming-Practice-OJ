#include<stdio.h>
float gpa(float x);
main()
{float a;
a=;



    printf("Your point is:%f",gpa(a));
}
float gpa(float x)
{
    float point;
    int marks;
    marks=(x/10);
    switch(marks)
    {
    case 10:
    case 9:
    case 8:
        point=5.00;
        break;
    case 7:
        point=4.00;
        break;
    case 6:
        point=3.50;
        break;
    case 5:
        point=3.00;
        break;
    case 4:
        point=2.00;
        break;
    case 3:
        point=1.00;
        break;
    case 2:
    case 1:
        point=0.00;
        break;
    default:
        point=0.00;
        break;
    }
    return point;
}
