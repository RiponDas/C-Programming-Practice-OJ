#include<stdio.h>
main()
{
    system("color f9");
    printf("...................Welcome to Ripon Chandra das's Hallo World..................\n");
    printf("Age Identifier:\n");
    int day,month,year,day1,month1,year1,day2,month2,year2;
    printf("Please enter value of birth day:");
    scanf("%d",&day);
    printf("Please enter value of birth month:\n");
    scanf("%d",&month);
    printf("Please enter value of birth year:\n");
    scanf("%d",&year);
    printf("Please enter value of present date(day):\n");
    scanf("%d",&day1);
    printf("Please enter value of present month:\n");
    scanf("%d",&month1);
    printf("Please enter value of present year:\n");
    scanf("%d",&year1);
    if(day<day1){
        day2=day1-day;
    }
    else{
        day2=(day1+30)-day;
        month=month+1;

    }
    if(month<month1){
        month2=month1-month;
    }
    else{
        month2=(month1+12)-month;
        year=year+1;
    }
    year2=year1-year;
    printf("Age is:%d year %d month %d day",year2,month2,day2);
    getch();
}

