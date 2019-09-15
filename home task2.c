#include<stdio.h>
main()
{system("color f5");
    double f,c;
    printf("please enter the value of celcius:\n");
    scanf("%lf",&c);
    f=((9*c)/5)+32;
    printf("The value of Farenhite:%lf",f);
    getch();
}
