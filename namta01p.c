#include<stdio.h>
main()
{
    system("color f9");
    int i,n,m;
    printf("Enter a number by which you want to see multiplication:");
    scanf("%d",&m);
    for(n=1;n<=5;n++){
        for(i=1;i<=10;i++){
            printf("%d*%d=%d\n",n,i,n*i);
        }
    }
    getch();
}
