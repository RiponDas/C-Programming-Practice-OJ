#include<stdio.h>
int main()
{
    long long int n,j,i,t;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        for(j=0;j<=n;j++)
            printf("%lld ",j);
        printf("\n");
    }
    return 0;
}
