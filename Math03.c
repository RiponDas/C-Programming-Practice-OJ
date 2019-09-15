#include <stdio.h>
int main()
{
    system ("color d5");
double num1, num2;
printf("Please enter a number: ");
scanf("%lf", &num1);
printf("Please enter another number: ");
scanf("%lf", &num2);
printf("%02lf + %0.2lf = %0.2lf\n", num1, num2, num1+num2);
printf("%0.2lf -%0.2lf = %0.2lf\n", num1, num2, num1-num2);
printf("%0.2lf * %0.2lf = %0.2lf\n", num1, num2, num1*num2);
printf("%0.2lf / %0.2lf = %0.2lf\n", num1, num2, num1/num2);
return 0;
}
