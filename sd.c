#include<stdio.h>
#include<math.h>
main()
{
    int n,i;
    float x[49],sum=0,average,addition,sum1=0,SD;
    printf("How many numbers do you want to calculate?");
    scanf("%d",&n);
    printf("please enter the %d numbers:",n);
    for(i=1;i<=n;i++)
    {
        scanf("%f",&x[i]);
        sum=sum+x[i];
    }
    average=sum/n;
    for(i=1;i<=n;i++)
    {
      addition=x[i]-average;
      sum1=sum1+(addition*addition);
    }
    SD=sqrt(sum1/n);
    printf("The standard deviation is %f",SD);
}
