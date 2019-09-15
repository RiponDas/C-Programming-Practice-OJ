#include<stdio.h>
int factorial(int x);
void main()
{
    int n;
    printf("Enter the number you want calculate factorial:");
    scanf("%d",&n);
    printf("Factorial of %d is %d\n\n",n,factorial(n));
}
int factorial(int x)
{
    int f=1,i;
    for(i=1;i<=x;i++)
        f=f*i;
    return f;
}
