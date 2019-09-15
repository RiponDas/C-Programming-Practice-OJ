#include<stdio.h>
#include<conio.h>
void sum(void);
void sub(void);
void mul(void);
void div(void);
void interest(void);
void age(void);
main()
{
    system("color f9");
    printf(".................WELCOME TO THE RIPON CHANDRA DAS'S HALLO WORLD.................\n");
    char ch;
    printf("Please enter 0 for addition:");
    printf("\nPlease enter 1 for subtraction:");
    printf("\nPlease enter 2 for multiplication:");
    printf("\nPlease enter 3 for division:");
    printf("\nPlease enter 4 for Interest Calculation:");
    printf("\nPlease enter 5 for Age Calculation:");
    printf("\nEnter 6 to 9 to show it or enter another number to Exit:");
    ch=getche();
    switch(ch)
    {
    case '0':
       sum();
        break;
    case '1':
       sub();
        break;
    case '2':
        mul();
        break;
    case '3':
       div();
        break;
    case '4':
        interest();
        break;
    case '5':
        age();
        break;
    case '6':
        printf("\nSix");
        break;
    case '7':
        printf("\nSeven");
        break;
    case '8':
        printf("\nEight");
        break;
    case '9':
        printf("\nNine");
        break;
    default :
        printf("\nYou did not enter number from 0 to 9.");
    }
printf("Please enter 0 for addition:\nPlease enter 1 for subtraction:\nPlease enter 2 for multiplication:\nPlease enter 3 for divition:\nPlease enter 4 for Interest Calculation:\n\n");
    getch();
}
void sum(void)
{
    double a,b,sum;
        printf("Welcome to the addition calculating:\n");
        printf("Please enter a number:");
        scanf("%lf",&a);
        printf("Enter another number:");
        scanf("%lf",&b);
        sum=a+b;
          printf("The summation is:%lf\n\n",sum);
}
void sub(void)
{
    double a,b,sum;
        printf("  Welcome to the subtraction calculating:\n");
        printf("Please enter a number:");
        scanf("%lf",&a);
        printf("Enter another number:");
        scanf("%lf",&b);
        sum=a-b;
          printf("The subtraction is:%lf\n\n",sum);
}
void mul(void)
{
    double a,b,sum;
        printf("  Welcome to the multiplication calculating:\n");
        printf("Please enter a number:");
        scanf("%lf",&a);
        printf("Enter another number:");
        scanf("%lf",&b);
        sum=a*b;
        printf("The multiplication is:%lf\n\n",sum);
}
void div(void)
{
    double a,b,sum;
        printf("  Welcome to the divition calculating:\n");
        printf("Please enter a number:");
        scanf("%lf",&a);
        printf("Enter another number:");
        scanf("%lf",&b);
        sum=a/b;
        printf("The divition is:%lf\n\n",sum);
}
void interest(void)
{
    int  amount,year,month,i;
    double interest,m,y,t_am;
    printf("If interest is inturms of month press 1.\nIf interest is inturms of year press 2.");
    scanf("%d",&i);
    if(i==1){
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("Enter the value of percentage of monthly interest:");
        scanf("%lf",&interest);
        printf("Enter the month:");
        scanf("%d",&month);
        printf("Enter the year:");
        scanf("%d",&year);
        m=(amount*interest*month)/100;
        printf("Monthly total interest=%lf\n",m);
        y=(12*year*interest*amount)/100;
        printf("Yearly total interest=%lf\n",y);
        t_am=amount+m+y;
        printf("Total amount=%lf\n\n",t_am);
    }
    else if(i==2){
         printf("Enter the amount:");
        scanf("%d",&amount);
        printf("Enter the value of percentage of yearly interest:");
        scanf("%lf",&interest);
        printf("Enter the month:");
        scanf("%d",&month);
        printf("Enter the year:");
        scanf("%d",&year);
        m=(amount*(interest/12)*month)/100;
        printf("Monthly total interest=%lf\n",m);
        y=(amount*year*interest)/100;
        printf("Yearly total interest=%lf\n",y);
        t_am=amount+m+y;
        printf("Total amount=%lf\n\n",t_am);
    }
}
void age(void)
{
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
    printf("Age is:%d year %d month %d day\n\n",year2,month2,day2);
}
