#include<stdio.h>
main()
{
    int cochu,i;
    float weight,height;
    cochu=0;
    printf("Enter weight and height for 10 boys\n");
    for(i=1;i<=10;i++){
        scanf("%f %f",&weight,&height);
        if(weight<50 && height>170)
            cochu=cochu+1;
    }
    printf("Number of boys with weight<50kg\n");
    printf("And height>170cm=%d\n",cochu);
}
