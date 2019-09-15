#include<stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
main()
{

char buffer[256] = {0};
char password[] = "password";
char c;
int pos = 0,k=0;
do{           //start
printf("%s", "Enter password: ");
do {
    c = getch();
    if( isprint(c) )
{
    buffer[ pos++ ] = c;
    printf("%c", '*');
}
}
}
