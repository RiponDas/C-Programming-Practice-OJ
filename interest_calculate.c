#include<stdio.h>
main()
{
    system("color f9");
    printf("               Welcome to Ripon Chandra das's Hallo World....\n");
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
        printf("Total amount=%lf",t_am);
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
        printf("Total amount=%lf",t_am);
    }
    getch();
}

