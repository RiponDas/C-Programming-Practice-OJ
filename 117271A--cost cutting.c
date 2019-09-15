#include<stdio.h>
int i;
main()
{
   int cluster,salary[20][3],i,j;
   printf("How many salary case do you want to calculate?");
   scanf("%d",&cluster);
   for(i=1;i<=cluster;i++)
   {
       printf("please enter the salary for case %d\n",i);
       for(j=1;j<=3;j++)
       {
         scanf("%d",&salary[i][j]);
       }
   }
   for(i=1;i<=cluster;i++)
   {
       if((((salary[i][1])>(salary[i][2]))&&((salary[i][1])<(salary[i][3]))) ||(((salary[i][1])>(salary[i][3]))&&((salary[i][1])<(salary[i][2]))))
       {
           printf("The survivor for case %d is:%d\n",i,salary[i][1]);
       }
       else if((((salary[i][2])>(salary[i][1]))&&((salary[i][2])<(salary[i][3]))) ||(((salary[i][2])>(salary[i][3]))&&((salary[i][2])<(salary[i][1]))))
       {
         printf("The survivor for case %d is:%d\n",i,salary[i][2]);
       }
       else if((((salary[i][3])>(salary[i][1]))&&((salary[i][3])<(salary[i][2]))) ||(((salary[i][3])>(salary[i][2]))&&((salary[i][3])<(salary[i][1]))))
       {
           printf("The survivor for case %d is:%d\n",i,salary[i][3]);
       }
   }
}
