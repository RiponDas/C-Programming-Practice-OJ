#include<stdio.h>
main()
{
    int a,b,c,d,m,n;
    float x1,x2,z;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&m,&n);
    z=(a*d-c*b);
    if(z==0){
        printf("The value of denominator is zero.");
    }
    else{
        x1=(m*d-b*n)/z;
        x2=(n*a-m*c)/z;
        printf("X1=%f and X2=%d",x1,x2);
    }
}
