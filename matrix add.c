#include<stdio.h>
int i,j,r1,r2,c1,c2;
void main()
{
  int mat1[5][5],mat2[5][5],mat3[5][5];
  printf("How many row and column you want to consider for matrix 1?");
  scanf("%d %d",&r1,&c1);
  printf("How many row and column you want to consider for matrix 2?");
  scanf("%d %d",&r2,&c2);
  if(r1==r2 && c1==c2)
  {
    for(i=1; i<=r1; i++)
    {
        printf("please enter %d numbers for row %d of matrix 1:",c1,i);
        for(j=1; j<=c1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
     for(i=1; i<=r2; i++)
    {
        printf("please enter %d numbers for row %d of matrix 2:",c2,i);
        for(j=1; j<=c2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
     for(i=1; i<=r1; i++)
    {
        for(j=1; j<=c1;j++)
        {
           mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    system("cls");
    printf(" The addition of 2 matrix is:\n");
     for(i=1; i<=r1; i++)
    {
        for(j=1; j<=c1;j++)
        {
            printf("%d\t",mat3[i][j]);
        }
        printf("\n");
    }
  }
}
