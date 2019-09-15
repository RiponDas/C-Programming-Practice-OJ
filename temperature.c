#include<stdio.h>
void main()
{
    int c,f,a,i;
    do{
    printf("To convert celsius to farenheight press 1: \nTo convert farenhieght to celcius press 2:");
    scanf("%d",&a);
    if(a==1){
         printf("please enter the value of celcius:");
    scanf("%d",&c);
    f=((9*c)/5)+32;
    printf("The value of farenhiet is:%d",f);
    }
    else if(a==2){
         printf("Please enter the value of farenhiet:");
    scanf("%d",&f);
    c=((5*f)-160)/9;
    printf("The value of celsius is:%d",c);
    }
    printf("\nPlease enter any key except 0 to continue the program.");
    scanf("%d",&i);
    }
    while(i!=0);
}
