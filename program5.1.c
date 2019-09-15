#include<stdio.h>
main()
{
    int girl,boy,code,i;
    girl=0;
    boy=0;
    printf("Please enter the code of 10 girls or boys.");
    for(i=1;i<=10;i++){
    scanf("%d",&code);
    if(code==1)
        boy=boy+1;
    else
        girl=girl+1;
    }
    printf("Number of boys is %d",boy);
        printf("Number of girls is %d",girl);
}
