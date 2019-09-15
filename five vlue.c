#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter five value:\n");
    scanf("%d",&a);
    xx:
        a=c;
    scanf("%d",&b);
     c=a+b;
    printf("%d + %d= %d\n",a,b,c);
    goto xx;
}
