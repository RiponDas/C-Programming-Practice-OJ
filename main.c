#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
int password();
int roll_base();
int name_base();
int merit_list();
main()
{
    int n;
    char c;
    xx:
    printf("\t\tMAIN MENU");
    printf("\tRoll based result\t[1]");
    printf("Name based result\t[2]");
    printf("Merit list based result\t[3]");
    scanf("%d",n);
    if(n==1)
    {
        roll_base();
    }
    else if(n==2)
    {
        name_base();
    }
    if(n==3)
    {
        merit_list();
    }
    else
    {
        printf("Your choice is wrong");
        printf("For going main menu press 1 otherwise any key");
        c=getch();
        if(c==1)
        {
            goto xx;
        }
        else
        {
            printf("THANK YOU FOR USING THIS");
        }
    }
}
int roll_base()
{
    FILE
}
