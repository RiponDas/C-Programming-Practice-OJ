#include<stdio.h>
main()
{
    system("color f0");
    int i,j,m1,m2,n1,n2,m,n,k;
    printf("Enter the value of row and column of matrix 1:");
    scanf("%d %d",&m1,&n1);
    printf("Enter the value of row and column of matrix 2:");
    scanf("%d",&m2);
    scanf("%d",&n2);

    int mat1[m1][n1];
    int mat2[m2][n2];
    int mat3[m1][n2];
    printf("Enter matrix 1:\n");
    for(i=1;i<=m1;i++){
        for(j=1;j<=n1;j++){

            scanf("%d",&mat1[i][j]);
        }

    }
    printf("Enter matrix 2:\n");
    for(i=1;i<=m2;i++){
        for(j=1;j<=n2;j++){

            scanf("%d",&mat2[i][j]);
        }

    }
    if(n1==m2){
    printf("\nMatrix Multiplication:\n\n");
    for(i=1;i<=m1;i++){
       for(j=1;j<=n1;j++){
            mat3[i][j]=0;
            for(k=1;k<=n1;k++){
        mat3[i][j] = mat3[i][j] + (mat1[i][k] * mat2[k][j]);
            }
       }
    }



    for(i=1;i<=m1;i++){
        for(j=1;j<=n2;j++){
            printf("%d\t",mat3[i][j]);
        }
        printf("\n");
    }
}
}

