#include<stdio.h>
int main(){
    int a,b,i,j,check,temp,count;
    while(scanf("%d%d",&a,&b)!=EOF){
            count = 0;
        if(a>b)
        {
            temp = a;
            a=b;
            b=temp;
        }
        if(a==1)
            a=a+1;
        for(i=a; i<=b; i++)
        {
            check=1;
            for(j=2; j<i; j++)
            {
                if(i%j==0){
                    check = 0;
                    break;
                }
            }
            if(check==1)
            count = count + i;
        }
        printf("%d\n",count);
    }
    return 0;
}
