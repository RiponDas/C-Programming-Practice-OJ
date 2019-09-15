#include<stdio.h>
main()
{
    char ch;
    printf("please enter a character............:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("The character is vowel.");
    }
    else{
        printf("The character is consonant.");
    }
}
