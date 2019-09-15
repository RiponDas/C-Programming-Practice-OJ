#include<stdio.h>

struct record
{
   char name[10];
   char phone[15];
   char email[15];
};
int main()
{
  struct record a;
  printf("Enter name:");
  scanf("%s",&a.name);
  printf("Enter phone:");
  scanf("%s",&a.phone);
  printf("Enter email:");
  scanf("%s",&a.email);
  printf("\n\n\n\tName  : %s \n\tPhone : %s\n \tE-mail: %s\n",a.name,a.phone,a.email);
  return 0;
}
