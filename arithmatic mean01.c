#include<stdio.h>
#define MAXSIZE 10
void main()
{
    float mean,x[MAXSIZE],sum;
    int i,n;
    printf("Enter value of N:");
    scanf("%d",&n);
    printf("\nPlease enter %d number:\n",n);
    for(i=0;i<n;i++){
    scanf("%f",&x[i]);
    sum=sum+x[i];
    }
    mean=sum/n;
    printf("Value of mean is:%f",mean);
}
