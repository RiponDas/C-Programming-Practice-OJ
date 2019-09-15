#include<stdio.h>
int main()
{
system("color 5f");
int n,i,j,k;
printf("\t\tEnter the row of the pyramid:\n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
for(j=1; j<=n-i; j++)
{
printf(" ");
}

for(k=1; k<=i; k++)
{
printf("* ");
}
printf("\n");
}
return 0;
}
