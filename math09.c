#include<stdio.h>
main()
{
    system("color f9");
    printf("               Welcome to Ripon Chandra das's Hallo World....\n");
    double u,v,t,a,s;
    printf("Enter the value of initial velocity:");
    scanf("%lf",&u);
    printf("Enter the value of acceleration:");
    scanf("%lf",&a);
    printf("Enter the value of time:");
    scanf("%lf",&t);
    v=u+(a*t);
    s=(2*t*v);
    printf("The distance is:%lfm",s);
    getch();
}

