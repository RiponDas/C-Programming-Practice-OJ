#include<stdio.h>
int main()
{
int y = 10;
int x = y++ + ++y;
printf("%d\n", x);
return 0;
}
