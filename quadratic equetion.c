#include<stdio.h>
#include<math.h>
float dem(float x,float y,float z);
float root1(float x,float y,float z);
float root2(float x,float y,float z);
void main(void)
{
    system("color 5f");
 float a,b,c,d,root;
 printf("Please enter the value of a,b,c");
 scanf("%f",&a);
 scanf("%f",&b);
 scanf("%f",&c);
 d=dem(a,b,c);
 if(d<0){
    printf("Roots are complex number:\n");
    printf("Roots of quadratic equetion is:%.3f+%.3fi\n",-b/(2*a),sqrt(-d)/(2*a));
    printf("& %.3f-%.3fi\n",-b/(2*a),sqrt(-d)/(2*a));
 }
 else if(d==0){
    printf("Roots are equal number:\n");
    root= -b /(2* a);
    printf("Root of quadratic equation is: %.3f\n",root);
 }
 else{
    printf("Roots are real number:\n");
    printf("Roots of quadratic equetion is:%f & %f\n",root1(a,b,c),root2(a,b,c));
 }
}
float dem(float x,float y,float z)
{
    float d;
    d=y*y-(4*x*z);
    return d;
}
float root1(float x,float y,float z)
{
    float d,r1;
    d=dem(x,y,z);
    r1=(-y+sqrt(d))/(2*x);
    return r1;
}
float root2(float x,float y,float z)
{
    float d,r2;
    d=dem(x,y,z);
    r2=(-y-sqrt(d))/(2*x);
    return r2;
}
