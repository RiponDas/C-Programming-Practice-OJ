//A program for using malti purpose that general calculating,interesr calculating, age calculating;

/*The program has three part 1.General Calcultion
2.Age Calculation
3.Interest Calculation*/

/*Program Authority:
    Ripon Chandra das
    Dept of Computer Science and Engineering
    University of Barisal.
Spervised by:
    Rahat Hossain Foysal
    Lecturer
    Dept of Computer Science and Engineering
    University of Barisal.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
//gencal is a subfunction used for general calculator
//agecal is a subfunction used for age calculation
//incal is a subfunction used for interest calculating
void gencal(void);
void agecal(void);
void incal(void);
int main()
{
    char n;//n for while statement
  system("color 2f"); //24 symbol of green background and red letter
  //character type declaretion for switch atatement
  char ch;
   printf(".................WELCOME TO THE RIPON CHANDRA DAS'S HALLO WORLD.................\n");
    printf("                                 ******************\n");
    printf("                                  *              *\n");
    printf("                    ****************  MULTI-CAL ****************\n");
    printf("                                  *              *\n");
    printf("                                 ******************\n");
   //do...while statement use for continuing the program rpeatly
  do
 //switch statement use for the purpose of multi funct
  {
      system("color 2f");
 printf("\n\nPlease enter your choice\n");
 printf("\nEnter a for General Calculator\n");
 printf("Enter b for Age Calculator\n");
 printf("Enter c for Interest Calculator");
 ch=getche();
 switch(ch)
 {
    case 'a':
        gencal(); //gencal () is used for general calculator
        break;
    case 'b':
        agecal(); //agecal is used for age calculation
        break;
    case 'c':
        incal();  //incal is used for interest calculator
        break;
    default:
        printf("\nYou enter a wrong number.\n Please try again.\n");
        break;
 }
    printf("\nPlease enter a value except 0 to run the program again.");
 n=getche();
  }

  while(n!=0);
  getch();
}
void add(void);
void sub(void);
void mul(void);
void div(void);
void sq(void);
void gencal(void)
{
 system("color 3f");//30 for aqua light white
 char i;
    char p; //i for while statement and p for switch statement
    printf("\n This is General Calculator\n");
    do
    {
    printf("\nPlease enter 1 for Addition\n");
    printf("Please enter 2 for Subtraction\n");
    printf("Please enter 3 for Multiplication\n");
    printf("Please enter 4 for Divition\n");
    printf("Please enter 5 for Square Root");
    p=getche();
    //switch statement use for the purpose of multi function calling
    switch(p)
    {
    case '1':
        add();//called a function for addition
        break;
    case '2':
        sub();//called a function for subtraction
        break;
    case '3':
        mul();//called a function for multiplication
        break;
    case '4':
        div();//called a function for divition
        break;
    case '5'://called a square root sub function
        sq();
        break;
    default:
        printf("\nYou enter a wrong number.");
        break;
    }
    printf("\n Enter 0 to run General Calculator again.");
    i=getche();
    }

    while(i!=0);
}
void add(void)
{
    system("color 81");//81 for gray blue
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
    system("color 5b"); //5b stands for purple light aqua
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
    system("color 71");//71 for white blue
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
    system("color 34");//34 for aqua red
    double a,b,sum;
        printf("  Welcome to the divition calculating:\n");
        printf("Please enter a number:");
        scanf("%lf",&a);
        printf("Enter another number:");
        scanf("%lf",&b);
        sum=a/b;
        printf("The divition is:%lf\n\n",sum);
}
void sq(void)
{
    system("color 3a");//3a for aqua light green
    int i;
    float j;
    printf("\n\nSquare Root Calculation:");
    printf("\nEnter a number:");
    scanf("%d",&i);
    j=sqrt(i);
    printf("\nSquare Root is:%f",j);
}
void agecal(void)
{
    system("color c7");//c7 for light red white
printf("\nAge Identifier:\n");
    int day,month,year,day1,month1,year1,day2,month2,year2;
    printf("\nPlease enter value of birth day:");
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
void incal(void)
{
    system("color e1");//e1 for light yellow blue
int  amount,year,month,i;
    double interest,m,y,t_am;
    printf("\n This is  Interest Calculator\n");
    printf("If interest is in terms of month press 1.\nIf interest is in terms of year press 2.");
    scanf("%d",&i);
    //here uses if else cnditional statement for display two another purpos
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
