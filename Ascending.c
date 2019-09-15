#include<stdio.h>
void main(void)
{
    int a[50],i,j,temp,number;
    printf("How many number do you want to arrange in ascending order?");
    scanf("%d",&number);
    printf("please enter %d numbers",number);
    for(i=1; i<=number; i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=1; i<=number; i++){
    for(j=i+1; j<=number; j++)
    {

        if(a[i]>a[j])
    {
        temp = a[j+1];
        a[j+1] = a[i];
        a[i] = temp;

    }
    printf("%d",a[i]);
    }
}
}
