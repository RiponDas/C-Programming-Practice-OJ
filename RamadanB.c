#include<stdio.h>
int main()
{
    int t,i,a,b,count=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&a, &b);
        count=count+(b-a);
    }
    printf("%d\n",count);
    return 0;
}
