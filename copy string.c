#include<stdio.h>
main()
{
    char s[15],s1[15];
    int i=0;
    scanf("%[^\n]",s);
    while(s[i]!='\0')
    {
        s1[i] = s[i];
        i++;
    }
    s1[i] = s[i];
    printf("%s",s1);
}
