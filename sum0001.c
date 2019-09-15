#include<stdio.h>
main()
{
    double num1,num2,value;
    char sign;
    printf("Please enter the number:");
    scanf("%lf",&num1);
    printf("Please enter another number:");
    scanf("%lf",&num2);
    value=num1+num2;
    sign='+';
    printf("\n%0.2lf %c %0.2lf=%0.5lf\n",num1,sign,num2,value);
    value=num1-num2;
    sign='-';
    printf("%0.2lf %c %0.2lf=%0.5lf\n",num1,sign,num2,value);
    value=num1*num2;
    sign='*';
    printf("%0.2lf %c %0.2lf=%0.5lf\n",num1, sign,num2,value);
    value=num1/num2;
    sign='/';
    printf("%0.2lf %c %0.2lf=%0.5lf\n",num1,sign,num2,value);

}
