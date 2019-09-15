#include<stdio.h>
int add(int fact)
{
int i,sum=1;
sum = sum * add(fact-1);
//fact=fact-1;

if(fact==1)
return sum;

}
main()
{
int a;
printf("Tumi kontar fact ber korte chaw??\n");
scanf("%d",&a);
printf("%d",add(a));
}
