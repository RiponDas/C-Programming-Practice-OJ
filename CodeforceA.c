#include<stdio.h>
int main()
{
    int n,d,i,count=0,count1=0,j;
    //char attend[10];
    scanf("%d %d",&n,&d);
    printf("%d %d",n,d);
        char attend[n];
        for(i=0;i<d;i++){
                for(j=1;j<=n;j++){
                    scanf("%c",&attend[j]);
                    if(attend[j]=='1'){
                        count++;
                }
                }
            if(count<n){
                count1++;
            }
            else{
                count1=0;
            }
        }
        printf("%d\n",count1);
    return 0;
}

