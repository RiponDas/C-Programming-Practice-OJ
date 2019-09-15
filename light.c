#include<stdio.h>
int main()
{
int i,j;
long int n;
while(scanf("%ld",&n) && n!=0){
long int d[n];
for(i=0;i<n;i++){
d[i]=0;
}
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
if(i%2==0)
continue;
if(j%i==0){
d[j-1]=d[j-1]+1;
}
}
}
if(d[n-1]%2==0){
printf("no\n");
}
if(d[n-1]%2==1){
printf("Yes\n");
}

}
return 0;
}
