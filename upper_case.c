#include<stdio.h>
main()
{
    char ch;
    printf("Please enter a character..........:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("The character is lower case.");
    }
    else if(ch>='A' && ch<='Z'){
        printf("The character is upper case.");
    }
}
