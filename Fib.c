#include<stdio.h>

int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
int fact(int n)
{
    if(n==0) return 1;
    else return n*fact(n-1);
}
int gcd(int m, int n)
{
    if(m%n==0) return n;
    else gcd(n,m%n);
}
int add(int a, int b)
{
    if(a==0) return b;
    else{
        return add(--a,++b);

    }
}
int mul(int a, int b)
{

    if(b==0) return 0;
    else return a+mul(a,--b);
}
int main()
{
    int fibo,facto,gcd_value, add_value;
    facto = fact(5);
    fibo= fib(5);
    gcd_value=gcd(13,3);
    add_value=add(3,7);
    int multi=mul(8,10);
    printf("%d\n",fibo);
    printf("%d\n",facto);
    printf("%d\n",gcd_value);
    printf("%d\n",add_value);
    printf("Multi-: %d\n",multi);

}
