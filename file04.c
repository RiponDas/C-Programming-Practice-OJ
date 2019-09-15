#include<stdio.h>
#include<stdlib.h>
main()
{
    char c;
    FILE *f1;
    f1=fopen("new.txt","w");
    while((c=getchar())!=EOF)
    putc(c,f1);
    fprintf(f1,"%c",c);
    fclose(f1);
}

