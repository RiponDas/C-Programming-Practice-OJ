#include<stdio.h>
#include<conio.h>
void sum(void);
void sub(void);
void mul(void);
void div(void);
void interest(void);
main()
{
    system("color f9");
    printf(".................WELCOME TO THE RIPON CHANDRA DAS'S HALLO WORLD.................\n");
    char ch;
    printf("Please enter 0 for addition:\nPlease enter 1 for subtraction:\nPlease enter 2 for multiplication:\nPlease enter 3 for divition:\nPlease enter 4 for Interest Calculation:\n\n");
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
        printf("\nFive");
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
