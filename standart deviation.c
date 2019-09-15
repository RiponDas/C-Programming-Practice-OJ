#include<stdio.h>
#include<math.h>
main()
{
    int n,i;
    float val[50],am,y,x,z,sum;
    printf("How many value do you want to calculate?\n");
    scanf("%d",&n);
    sum=0;
    y=0;
    for(i=1;i<=n;i++)
    {
        printf("please enter the %dth value:\n",i);
        scanf("%f",&val[i]);
        sum=sum+val[i];
    }
    am=(sum/n);
    for(i=1;i<=n;i++)
    {
        y=y+((val[i]-am)*(val[i]-am));
    }
    x=y/n;
    z=sqrt(x);
    printf("The standard deviation is:%f",z);
}
