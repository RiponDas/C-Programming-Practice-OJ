#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c,s;
    double x,y;
    printf("Please enter the value of a,b,c");
    scanf("%d",&a);
     scanf("%d",&b);
      scanf("%d",&c);
      s=(a+b+c)/2;
      x=(s*(s-a)*(s-b)*(s-c));
      y=sqrt(x);
      printf("the area of triangle:%lf",y);
}
