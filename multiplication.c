#include<stdio.h>
main()
{
    int n,i,j;
    printf("please enter the multiplication number:");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
       {j=n*i;
       printf("%d*%d=%d",n,i,j);
       }
}
