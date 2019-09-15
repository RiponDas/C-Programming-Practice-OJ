#include<stdio.h>
main()
{
    int a;
    printf("Please enter any integer number:");
    scanf("%d",&a);
    if(a>0){
        printf("The number is positive.");
    }
    else if(a<0){
        printf("The number is negative.");
    }
    else{
        printf("The number is zero.");
    }
}
