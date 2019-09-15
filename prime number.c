#include<stdio.h>
main()
{
    int number,prime,i;
    printf("please enter a number:");
    scanf("%d",&number);
    for(i = 3; i <= number-1; i++)
    {
        prime = number%i;
        while(prime==0)
        {
             printf("The number %d is not a prime number.",number);
            break;
        }
    }

}
