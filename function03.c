#include<stdio.h>
int square(int x)
{
    int y;
    y=x*x;
    return y;
}
void main()
{
    int a,sq;
    scanf("%d",&a);
    sq=square(a);
    printf("The square of %d is %d\n",a,sq);
}
