#include<stdio.h>
int main()
{
    int n,d,i,count,count1,j;
    while(scanf("%d %d",&n,&d)!=EOF){
            count1=0;
        char attend[n];
        for(i=1;i<=d;i++){
                count=0;
                scanf("%s",&attend);
                for(j=0;j<n;j++){
                    if(attend[j]=='1'){
                        count++;
                }
                }
            if(count<n){
                count1++;
            }
            else if(i<d){
                count1=0;
            }
        }
       printf("%d\n",count1);
    }
    return 0;
}
