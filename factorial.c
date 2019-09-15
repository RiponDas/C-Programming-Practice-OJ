#include<stdio.h>
main()
{int n,i,f;
    printf("which number's factorial do you want to find?\n");
    scanf("%d",&n);
    f=1;
    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
     printf("%d",f);
}
