#include<stdio.h>
void main()
{
    int i,j,n;
    char dep[10];
    printf("How many department included of your Institute?");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the name of the Department:");
        for(i=0;i<10;i++){
            scanf("%c",&dep[i]);
        }
       printf("Welcome to the Department of ");
       for(i=0;i<10;i++){
       printf("%c",dep[i]);
       }
    }
}
