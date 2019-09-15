#include<stdio.h>
int main()
{
    int n,i;
    for(i=1;i<=20;i++){
        for(n=1;n<=10;n++){
            printf("%d*%d=%d\n",i,n,i*n);
        }
    }
    return 0;
}
