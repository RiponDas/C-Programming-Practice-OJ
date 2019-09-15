#include<stdio.h>
void main()
{
    int i;
    float c,f;
    printf("The chart of celcius and farenheight temperature:\n");

    printf("celcius\t farenheight\n");
    for(i=0;i<=250;i=i+25)
    {
        c=(i-32)/1.8;
        printf("%d\t %d\n\n",i,c);
    }
}
