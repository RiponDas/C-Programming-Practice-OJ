#include<stdio.h>
main()
{
    int m,n,a,sum;
    printf("Please enter the initial number:");
    scanf("%d",&a);
    printf("Please enter the last number:");
    scanf("%d",&m);
    if(m%2==0){
        n=(m/2);
    }
    else{
        n=(m+1)/2;
    }
    sum=n*(a+n-1);
    printf("The summation is:%d",sum);
}
