#include<stdio.h>
#include<math.h>
int main()
{
int a,c;
while(scanf("%d",&a)!=EOF){
c=pow(10,(a-1));
printf("%d\n",c);
}
return 0;
}
