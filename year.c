#include<stdio.h>
main()
{
    int month,day,year,day1;
    printf("please enter the day:");
    scanf("%d",&day);
    year=day/365;
    month=(day%365)/30;
    day1=(day%365)%30;
    printf("The year is %d\n",year);
    printf("The month is %d\n",month);
    printf("The day is %d",day1);
}
