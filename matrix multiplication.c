#include<stdio.h>
#include<windows.h>
main()
{
    system("color f9");
    int matrix1[5][5],matrix2[5][5],matrix3[5][5],i,j,r1,r2,c1,c2,k;
    printf("How many row and column you want to take for 1st matrix?\n");
    scanf("%d %d",&r1,&c1);
    printf("How many row and column you want to take for 2nd matrix?\n");
    scanf("%d %d",&r2,&c2);
    if(c1==r2)
    {
        for(i=1; i<=r1; i++)
        {
           printf("enter the %d number for Row %d of matrix 1\n",c1,i);
           for(j=1; j<=c1; j++)
           {
               scanf("%d",&matrix1[i][j]);
           }
        }
        //second matrix

             for(i=1; i<=r2; i++)
        {
           printf("enter the %d number for Row %d of matrix 2\n",c2,i);
           for(j=1; j<=c2; j++)
           {
               scanf("%d",&matrix2[i][j]);
           }
        }
        printf("LOADING.......\n");
        for(i=1; i<=20; i++)
        {
             printf("\xB2");
         Sleep(100);
        }

         system("cls");
         printf("\nMatrix Multiplication:\n\n");
    for(i=1;i<=r1;i++){
       for(j=1;j<=c1;j++){
            matrix3[i][j]=0;
            for(k=1;k<=c1;k++){
        matrix3[i][j] = matrix3[i][j] + (matrix1[i][k] * matrix2[k][j]);
            }
       }
    }



    for(i=1;i<=r1;i++){
        for(j=1;j<=c2;j++){
            printf("%d\t",matrix3[i][j]);
        }
        printf("\n");
    }
    }

}
