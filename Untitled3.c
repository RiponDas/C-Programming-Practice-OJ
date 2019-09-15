#include<stdio.h>
int add(int x,int y)
{
    return printf("%*c%*c",x,'\r',y,'\r');
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Sum %d",add(a,b));
}
