#include<stdio.h>
main()
{
    int n,f;
    scanf("%d",&n);
    f=1;
    do
    {
        f=f*n;
n--;
    }
while(n>1);
printf("\t%d",f);
}
