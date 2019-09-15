#include<stdio.h>
int main(){
    long int n,t,i,j;
    scanf("%ld",&t);
    for(i=1;i<=t;i++){
        scanf("%ld",&n);
        if(n<0){
                    for(j=0;j>=n;j--){
            printf("%ld ",j);
        }
                }
        else{
            for(j=0;j<=n;j++){
            printf("%ld ",j);
        }
        }
        printf("\n");
    }
    return 0;
}
