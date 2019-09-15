#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch;
    printf("Do you want to shut down your computer?(y/Y)");
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y'){
        system("C:\\Windows\\System32\shutdown");
    }
    return 0;
}
