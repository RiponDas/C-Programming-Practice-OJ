
#include<stdio.h>
main()
{
    system("color f9");
    printf("               Welcome to Ripon Chandra das's Hallo World....\n");
    int n,m,i;
    printf("Enter the value of nth number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        m=m+i;
    }
    printf("The summation is:%d",m);
    getch();
}

