#include<stdio.h>
main()
{
    system("color 5f");
    int i,j,n,p,k,m;
    printf("Enter the value of base of the triangle:\n\n");
    scanf("%d",&p);
    m=(p-1)/2;
    n='*';
    for(i=1;i<=p;i=i+2){
             for(k=1;k<=m;k++){
                        printf(" ");
                    }
            for(j=1;j<=i;j++){

        printf("%c",n);
            }
            printf("\n");
            m=m-1;
    }
    m=1;
    for(i=p-2;i>=1;i=i-2){
        for(k=1;k<=m;k++){
            printf(" ");
        }
        for(j=i;j>=1;j=j--){
            printf("%c",n);
        }
        printf("\n");
        m=m+1;
    }
    getch();
}
