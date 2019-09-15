#include<stdio.h>
void add(int x);
main()
{
int n;
printf("\tHow many row dou you want to print??\n");
scanf("%d",&n);
add(n);
}
void add(int x)
{
    int i,j,k,m;
    m=(2*x)-1;
    for(i=1;i<=m;i=i+2)
    {
        for(j=1;j<=x-1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
        x=x-1;
    }
}
