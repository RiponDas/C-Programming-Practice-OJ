#include <stdio.h>
#include <math.h>
#define MAXSIZE 10
void main()
{
    float x[MAXSIZE];
    int  i, n;
    float average, variance, std_deviation, sum = 0, sum1 = 0;
    printf("Enter the value of N \n");
    scanf("%d", &n);
    printf("Enter %d real numbers \n", n);

    for (i = 0; i < n; i++)
    {
    scanf("%f", &x[i]);
    }/*  Compute the sum of all elements */

    for (i = 0; i < n; i++){
    sum = sum + x[i];
    }
    average = sum /n;

    /*  Compute  variance  and standard deviation  */

    for (i = 0; i < n; i++){
    sum1 = sum1 + ((x[i] - average)*(x[i] - average));
    }
    variance = sum1 /n;

    std_deviation = sqrt(variance);

    printf("Average of all elements = %.2f\n", average);

    printf("variance of all elements = %.2f\n", variance);

    printf("Standard deviation = %.2f\n", std_deviation);

}

