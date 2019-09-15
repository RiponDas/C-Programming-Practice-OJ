#include<stdio.h>
main()
{
    system("color 5f");
    int i,j,p,k,m;
    char n;
    printf("How many row containing the pyramid:");
    scanf("%d",&m);
    p=(m*2)-1;
    n='*';
    for(i=1;i<=p;i=i+2){
             for(k=1;k<m;k++){
                        printf(" ");
                    }
            for(j=1;j<=i;j++){

        printf("%c",n);
            }
            printf("\n");
            m=m-1;
    }
}
