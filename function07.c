#include<stdio.h>
#include<conio.h>
void sum(int x,int y);
int main()
{

    int a,b,c;
    printf("Please enter two values");
    scanf("%d",&a);
    scanf("%d",&b);
    sum(a,b);
    printf("The summation is:%d",c);
    return 0;
}
void sum(int x,int y)
{
   int add;
    add=x+y;
    printf("The summation is:%d",add);
    getch();
    return add;
}
