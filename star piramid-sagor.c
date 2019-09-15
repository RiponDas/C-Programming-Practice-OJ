#include<stdio.h>
void main()
{
int i,j,k,n;
printf("\tEnter the rows number of your pyramid\n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=1;j<=n-i;j++)
printf(" ");
for(k=0;k<i-1;k++)
printf("* ");
printf("\n");
}
}
