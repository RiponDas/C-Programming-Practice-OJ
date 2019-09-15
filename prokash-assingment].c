#include<stdio.h>
#include<math.h>
float add1(float p,float q,float r);
float add2(float p,float q,float r);
float dscrmt(float m,float n,float o);
int main()
{
float a,b,c,d,xx;
printf("Enter the value of a,b,c:\n");
scanf("%f %f %f",&a,&b,&c);
if(dscrmt(a,b,c)>0)
{
printf("the quadretic equation is=%.2f\n",add1(a,b,c));
printf("the quadretic equation is=%.2f\n",add2(a,b,c));
}
else
printf("\nRoots are imaginary\n");
return 0;
}
float add1(float p,float q,float r)
{
float d,s,x1,t;
t=dscrmt(p,q,r);
s=sqrt(t);
x1=(-q+s)/(2*p);
return x1;
}
float add2(float p,float q,float r)
{
float d,s,x2,t;
t=dscrmt(p,q,r);
s=sqrt(t);
x2=(-q-s)/(2*p);
return x2;
}
float dscrmt(float m,float n,float o)
{
float d,xx;
d=(n*n)-(4*m*o);
return d;
}
