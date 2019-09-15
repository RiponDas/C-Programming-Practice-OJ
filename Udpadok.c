#include<stdio.h>
main()
{
    int a,i,count;
    while(scanf("%d",&a)!=EOF){
            count=0;
    for(i=1;i<=a;i++){
        if(a%i==0){
            count=count+1;
        }
        else{
            continue;
        }
    }
    printf("%d",count);
    }
}

