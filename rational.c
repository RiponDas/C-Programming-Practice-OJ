#include<stdio.h>
int main(){
    int a,b,i,m,n;
    scanf("%d%d",&a,&b);
    for(i=b-1; i<1; i--)
    {
        n = b/i;
        m=a/i;
        if(b%i==0&&a%i==0)
            printf("%d/%d",m,n);
    }
    return 0;
}

