#include<stdio.h>
main()
{
    system("color f9");
    int x1,x2,y1,y2;
    double D,S;
    printf("Enter the value of x1:\n");
    scanf("%d",&x1);
    printf("Enter the value of x2:\n");
    scanf("%d",&x2);
    printf("Enter the value of y1:\n");
    scanf("%d",&y1);
    printf("Enter the value of y2:\n");
    scanf("%d",&y2);
    S=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    D=sqrt(S);
    printf("Distance between two point is:%lf",D);
    getch();

}
