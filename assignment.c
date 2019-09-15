#include<stdio.h>
main()
{
   float pi=3.1416;
int a,b,c,r,h,k,s,p;
printf("press 1 for circle\n press 2 for triangle\n press 3 for rectangle\n");
scanf("%d",&p);
switch(p)
{
case 1:
printf("enter value for radius:\n");
scanf("%d",&r);
k= pi*r*r;
s=2*pi*r;
printf("the area and circumfrence of circle is: %d %d",k,s);
break;
case 2:
printf("enter value for height for a triangle\n"); scanf("%d",&h);
printf("enter the values for 3 sides of a triangle\n");
scanf("%d %d %d",&a,&b,&c); k=(b*h)/2; s=(a+b+c);
printf("the area and circumfrence of triangle is: %d %d",k,s);
break;
case 3:
printf("enter value for base and height of rectangle\n");
scanf("%d %d",&b,&h);
k=b*h;
s=2*(b+h);
printf("the area and circumfrence of rectangle is: %d %d",k,s);
break;
}
}
