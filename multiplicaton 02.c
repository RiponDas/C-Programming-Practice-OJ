#include<stdio.h>
main()
{int n,i,j,m;
printf("please enter the number you want to multiplication:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     for(m=1;m<=10;m++)
      {
          j=i*m;
     printf("%d*%d=%d\n",i,m,j);
    }
    }
    printf("\n\n");
}
