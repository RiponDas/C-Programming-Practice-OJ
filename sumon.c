#include<stdio.h>

void sort( int m, int x[]);

int main()
{
    int i;
    int marks[5]={10,5,7,8,1};

    printf("print before sorting\n");

    for(i=1;i<=5;i++)
    {
        printf("%4d",marks[i]);
    }
    printf("\n\n");

    sort(5,marks);

    for(i=0;i<5;i++)
    {
        printf("%4d",marks[i]);
    }

}
   void sort(int m, int x[])
   {
       int i,j,k;
       for(i=1;i<=m-1;i++)
       for(j=1;j<=m-i;j++)
        if(x[j-1]>=x[j])
       {
           k=x[j-1];
           x[j-1]=x[j];
           x[j]=k;
       }
   }
