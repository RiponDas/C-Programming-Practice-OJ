#include<stdio.h>
#include<math.h>
float dem(float x,float y,float z);
float root1(float x,float y,float z);
float root2(float x,float y,float z);
void main(void)
{
    float a,b,c,d;
    d=dem(a,b,c);

    if(d<0)
    {
      printf("The roots are complex number\n");
      printf("The roots are:%.3f+%.3fi",-b/(2*a),(-d)/(2*a));
    }
}
