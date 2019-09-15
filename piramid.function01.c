#include<stdio.h>
void piramid(int n);
void main()
{
    int n;
    printf("Please enter the value of row:");
    scanf("%d",&n);
    piramid(n);
}
void piramid(int n)
{
    int i,j,k,p;
    p=(2*n)-1;
    for(i=1;i<=p;i=i+2){
        for(j=1;j<=n-1;j++){
            printf(" ");
        }
       for(k=1;k<=i;k++){
       printf("*");
       }
       printf("\n");
       n=n-1;
    }
}
