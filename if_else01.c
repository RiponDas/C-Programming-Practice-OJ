#include<stdio.h>
main()
{
    int n;
    scanf("The number is:%d",&n);
    if(n<0){
        printf("The number is negative\n");
    }
    else if(n>0){
        printf("The number is positive\n");
    }
    else if(n==0){
        printf("The number is zero:\n");
    }
}
