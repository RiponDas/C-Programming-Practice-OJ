#include<stdio.h>
void add(void);
void sub(void);
void mul(void);
void div(void);
main()
{
    system("color d1");
    int i;
    char p;
    printf("\n This is General Calculator\n");
    do
    {
    printf("Please enter 1 for Addition\n");
    printf("Please enter 2 for Subtraction\n");
    printf("Please enter 3 for Multiplication\n");
    printf("Please enter 4 for Divition\n");
    p=getche();
    switch(p)
    {
    case '1':
        add();
        break;
    case '2':
        sub();
        break;
    case '3':
        mul();
        break;
    case '4':
        div();
        break;
    default:
        printf("\nYou enter a wrong number.");
        break;
    }
    printf("\n Enter any number except 0 to run General Calculator again.");
    scanf("%d",&i);
    }
    while(i!=0);
}
void add(void)
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
