#include<stdio.h>
void main()
{
    char name[15],address[15],address1[15];
    printf("Enter your name:(one word) \n");
    scanf("%s",name);
    printf("Enter your address:(one word)\n");
    scanf("%s",address);
    printf("Enter Town.");
    scanf("%s",address1);
    printf("\n Name:%s\n Address:%s, %s\n",name,address,address1);
}
