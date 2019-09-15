#include<stdio.h>
main()
{
    int x1,x2,y1,y2;
    double d,y;
    printf("Enter the value of position of x1,x2,y1,y2\n");
    scanf("%d",&x1);
    scanf("%d",&x2);
    scanf("%d",&y1);
    scanf("%d",&y2);
    d=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    y=sqrt(d);
    printf("The distance is:%lf",y);
}
