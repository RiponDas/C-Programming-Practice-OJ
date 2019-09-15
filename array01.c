#include<stdio.h>
main()
{
    system("color f9");
    printf("               Welcome to Ripon Chandra das's Hallo World....\n");
    int i,n;
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    int ar[10];
    for(i=0,n=9;i<10;i++,n--){
        ar[n]=a[i];
    }
    for(i=0;i<10;i++){
        a[i]=ar[i];
    }
    for(i=0;i<10;i++){
        printf("%d th number is %d\n",i+1,a[i]);
    }
    getch();
}

