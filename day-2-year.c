#include<stdio.h>
#include <iostream>
using namespace std;

int main ()
{
int totalDays;
int years;
int weeks;
int days;
cout << "Please enter the number of days: ";
cin >> totalDays;
years = totalDays/365;
weeks = (totalDays % 365)/7;
days = (totalDays % 365) % 7;
cout << "You entered " << totalDays << " Days" << endl;
cout << "That is " << years << " years, " << weeks << " weeks, and " << days << " days." << endl;

return 0;
}

#include<stdio.h>
#include<conio.h>

main ()
{
int months, days, year;

printf("Enter days\n") ;
scanf("%d", &days) ;

months = days / 30 ;
year = days /365;
days = days % 30 ;

printf("Months = %d Days = %d Year = %d", months, days, year) ;
}
