#include<stdio.h>
int main()
{
    int n,j;
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=0;j<=n;j++)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}
