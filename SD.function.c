#include<stdio.h>
#include<math.h>
void toma(void);
void sathi(void);
void rani(void);
float pal(void);
int n,i;
float x[100],av,ts,v,sd;
main()
{
toma();
sathi();
rani();
printf("\tthe number of students is %d\n\t and their sd is %f\n",n,pal());
//pal();
}

void toma(void)
{
float sum=0;
scanf("%d",&n);
for(i=0; i<n; i++)
{
scanf("%f",&x[i]);
sum=sum+x[i];
}
av=sum/n;
//printf("%f",av);
}
void sathi(void)
{
for(i=0; i<n; i++)
{
ts=ts+(x[i]-av)*(x[i]-av);
}
}
void rani(void)
{
v=ts/n;
//printf("%f",v);
}
float pal(void)
{
sd=sqrt(v);
//printf("%f",sd);
return sd;

}
