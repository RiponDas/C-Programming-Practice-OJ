#include <stdio.h>
int main()
{
double x,y,xy,xy1;
printf("Please enter the value of x+y:");
scanf("%lf",&xy);
printf("Please enter the value of x-y:");
scanf("%lf",&xy1);
x=(xy+xy1)/2;
y=(xy-xy1)/2;
printf("x=%lf,y=%lf",x,y);
return 0;
}
