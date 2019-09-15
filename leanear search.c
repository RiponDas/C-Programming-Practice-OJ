#include<stdio.h>
int main(){
    int a[5],b,i,check=0;
        for(i=0;i<5;i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&b);
        for(i=0;i<5;i++){
            if(a[i]==b){
                check=1;
                break;
            }
        }
        if(check==1){
            printf("Yes\n");
            printf("%d\n",i+1);
        }
        else if(check==0)
            printf("No\n");
    return 0;
}
