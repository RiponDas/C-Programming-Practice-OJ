#include<stdio.h>
#define pf printf
#define pfi(a) printf("\n%d",a)
#define MAX(a,b) (a>b)? (a):(b)
void main()
{
    pf("hallo");
    pfi(MAX(3,5));
    ///printf("#d\n",(3,5)? (3):(5))
}
