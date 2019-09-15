#include<stdio.h>
main()
{
    char ch[15];
    int i;
    scanf("%[^\n]",ch);
    i=0;
    while(ch[i]!='\0')
    {
        i++;
    }
    printf("the length of the string is: %d",i);
}
