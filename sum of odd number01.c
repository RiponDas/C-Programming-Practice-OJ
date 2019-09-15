#include<stdio.h>
main()
{
    system("color f9");
    int a,n,m,i,sum;
    printf("please enter the initial value:");
    scanf("%d",&a);
    if(a%2==0){
        printf("You enter a even number. Please enter any odd number:");
    }
    else{
        printf("Enter the last value:");
        scanf("%d",&m);
        if(m%2==0){
            n=m/2;
        }
        else{
            n=(m+1)/2;
        }
        sum=n*(a+n-1);
        printf("The summation is:%d",sum);
    }
    getch();
}
