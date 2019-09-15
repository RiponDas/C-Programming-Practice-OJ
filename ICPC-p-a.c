#include<stdio.h>
int main()
{
    int day=29,mon=5,y=2013;
    int day1=day+2,mon1=mon+5,y1=y+2;
    if(mon1>=12){
        mon1=mon1-12;
        y1=y1+1;
    }
    if(day1>=30){
        if((mon1>=31)&&(mon1+1==1||mon1+1==3||mon1+1==5||mon1+1==7||mon1+1==8||mon1+1==10||mon1+1==12)){
            mon1=mon1+1;
            day1=day1-31;
        }
        else if((mon1>=32)&&(mon1+1==4||mon1+1==6||mon1+1==9||mon1+1==11)){
            mon1=mon1+1;
            day1=day1-30;
        }
        else if(mon1+1==2){
            if(y1%4==0){
                mon1=mon1+1;
                day1=day-29;
            }
            else{
                mon1=mon1+1;
                day1=day-28;
            }
        }
    }
    if(mon1>=12){
        mon1=mon1-12;
        y1=y1+1;
    }
    printf("%d %d %d",day1,mon1,y1);
    return 0;
}
