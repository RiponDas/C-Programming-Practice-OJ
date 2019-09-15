#include<stdio.h>
#include<math.h>
float dem(float x,float y,float z);
float root1(float x,float y,float z);
float root2(float x,float y,float z);
main()
{
  float a,b,c,d;
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  dem(a,b,c);
  if(d<0)
  {
      printf("Roots are complex number");
      printf("The roots are:%.3f+%.3fi",(-b/2*a),(sqrt(-d)/(2*a)));
      printf("&%.3f-%.3fi",(-b/2*a),(sqrt(-d)/(2*a)));
  }
  if(d==0)
  {
      printf("Roots are equal number");
      printf("The root is:%.3f",(-b)/(2*a));
  }
  else
  {
      printf("The roots are real number");
      printf("Th roots are:%.3f",root1(a,b,c));
      printf("&%.3f",root2(a,b,c));
  }
}
float dem(float x,float y,float z)
{
    float d;
    d=(y*y)-4*x*z;
    return d;
}
float root1(float x,float y,float z)
{
    float root1,d;
    d=dem(x,y,z);
    root1=(-y/(2*x))+(sqrt(d)/(2*x));
    return root1;
}
float root2(float x,float y,float z)
{
    float d,root2;
    d=dem(x,y,z);
    root2=(-y/(2*x))-(sqrt(d)/(2*x));
    return root2;
}
