#include<stdio.h>
main()
{
    system("color f9");
    char ch;
    printf("Please enter any character:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("The input character is vowel.");
    }
    else{
        printf("The input character is a consonant.");
    }
    getch();
}
