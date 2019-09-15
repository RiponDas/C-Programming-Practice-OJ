#include<stdio.h>
int fer(int x);
int cel(int x);
int main()
{
    int c,f;
    printf("Please enter the value of celcius:\n");
    scanf("%d",&c);
    f=cel(c);
    printf("Value of farenheight is:%d",f);
    printf("\nEnter the value of farenheight:\n");
    scanf("%d",&f);
    c=fer(f);
    printf("Value of celcius is:%d",c);
    return 0;
}

int cel(int x)
{
    int y;
    y=((9*x)/5)+32;
    return y;
}
int fer(int x)
{
    int y;
    y=((5*x)-160)/9;
    return y;
}
