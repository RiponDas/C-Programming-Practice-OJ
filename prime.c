#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF){
        for(i=2; i<=(n/2);i++){
        if(n%i==0){
            printf("%d is not prime.\n",n);
            return;
        }
    }
    printf("%d is prime\n", n);
    }
    return 0;
}
