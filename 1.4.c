#include<stdio.h>
main()
{
    int i,a,c;
    printf("please enter the number what you want to multiple:\n");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",a,i,(a*i));
    }
}
