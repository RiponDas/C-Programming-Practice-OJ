#include<stdio.h>
int main()
{
    int year;
    while( scanf("%d",&year)!=EOF){
        if(year>=2000){
             if(year%15==0){
                 if(((year%4==0)&&(year%100!=0))||(year%400==0))
                 {
                     printf("This is leap year\n",year);
                     printf("This is Huluculu festival year\n",year);
                 }
                 else
                 printf("This is Huluculu festival year\n",year);
}
             else if((year%4==0)&&(year%100!=0)||(year%400==0))
             {
                if(year%55==0)
                        printf("This is Bulukulu festival year\n",year);
                else
                printf("This is leap year\n",year);
             }
            else
            printf("This is an ordinary year",year);
    }
}
return 0;
}
