#include<stdio.h>
main()
{
    system("color f9");
    printf("               Welcome to Ripon Chandra das's Hallo World....\n");
    int a,b,x,i;
    printf("Enter any two number:");
    scanf("%d,%d",&a,&b);
    if(a>b){
        x=b;
    }
    else{
        x=a;
    }
    for(;x>=1;x--){
        if(a%x==0 && b%x==0){
            i=x;

            break;
        }

    }
    printf("%d",i);



    getch();
}

