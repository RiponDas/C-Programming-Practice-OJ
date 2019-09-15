#include<stdio.h>
main()
{
    int i,j,n,p;
    printf("Enter the value of base of the triangle:");
    scanf("%d",&p);
    n='*';
    for(i=1;i<=p;i++){
            for(j=1;j<=i;j++){
        printf("%c",n);
            }
            printf("\n");
    }
}
