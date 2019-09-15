#include<stdio.h>
#include<conio.h>
main ()
{
int m;
x:
printf("\tPress 1 for square shape\nPress 2 for pyramid shape\n");
scanf("%d",&m);
switch (m)
{
case 1:
{
int n,i,j,k,l;
printf("\n\nEnter value\n\n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
printf("→");
}
printf("\n");
for(j=1; j<=n-2; j++)
{
printf("↑");
for(k=1; k<=n-2; k++)
{
printf(" ");
}
printf("↓");
printf("\n");
}
for(l=1; l<=n; l++)
{
printf("←");
}
}
break;
case 2:
{
int n,i,j,k;
printf("\tHow row do u want to print??\n\n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
for(j=1; j<=n-i; j++)
{
printf(" ");
}
for(k=0; k<i; k++)
{
printf("* ");
}
printf("\n");
}
}
break;
default :
printf("Please Re-enter a value\n");
break;
}
goto x;
}
