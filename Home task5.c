#include<stdio.h>
main()
{
    system("color f9");
    int a,b,c;
    char x,y;
    printf("Type the value of a:\n");
    scanf("%d",&a);
    printf("Type the value of b:\n");
    scanf("%d",&b);
    printf("Type the value of c:\n");
    scanf("%d",&c);
    printf("The equation is:%dx+%dy=%d",a,b,c);
    getch();
}
