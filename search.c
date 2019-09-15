#include<stdio.h>
int main()
{
    int n,s[15],i,a,check=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(s[i]==a){
            check=1;
            break;
        }
    }
    if(check==1)
        printf("%d",i+1);
    else
        printf("No");
}
