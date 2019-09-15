#include<stdio.h>
main()
{
    FILE *f1;
    char c;
    f1=fopen("file02.txt","r");
    while((c=getc(f1))!=EOF)
        printf("%c",c);
    fclose(f1);
}

