#include<stdio.h>
int main ()
{
    int years,month,days=800;
    years=800/365;
    month=(800/30)/12;
    days=(800%365)%30;
    printf("%d\n%d\n%d\n",years,month,days);
}
