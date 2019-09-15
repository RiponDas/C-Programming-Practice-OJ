#include<stdio.h>
main()
{
    int number,reminder,value,divider;
    printf("Please enter any integer number:");
    scanf("%d",&number);
    printf("Please enter any divider:");
    scanf("%d",&divider);
    value=(number/divider);
    reminder=number-(value*divider);
    printf("The reminder is %d",reminder);
}
