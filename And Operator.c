#include<stdio.h>
main()
{
    system("color f9");
    char ch;
    printf("Please enter any character:");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z'){
        printf("The input character is upper case.");
    }
    else if(ch>='a'&& ch<='z'){
        printf("The input character is lower case.");
    }
    getch();
}
