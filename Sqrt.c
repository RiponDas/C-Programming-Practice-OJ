#include<stdio.h>
main()
{
    int n,i,num;
    printf("Please enter any number to Squre root");
    scanf("%d",&num);
    for(i=1;i<num;i++){
            n=num%i;
    if(n<i){
        printf("%d\n",i);
    }
    }
}
