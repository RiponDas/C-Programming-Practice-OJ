#include<stdio.h>
main()
{
    int i,n;
    float sum;
    printf("How many number do you want to add as inverse?\n");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+(float)1/i;
    }
    printf("the add of %d number is:%f",n,sum);
}
