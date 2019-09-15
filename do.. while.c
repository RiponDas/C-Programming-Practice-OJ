#include<stdio.h>
int main()
{
    int i,sum;
    sum=0;
    i=0;
    do
    {
        sum=sum+i;
        printf("%d\n",sum);
        i=i+1;
    }
    while(i<=10);

        return 0;
}
