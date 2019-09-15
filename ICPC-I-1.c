#include<stdio.h>
#include<math.h>
int main()
{
    int t,p;
    unsigned long long int n,k,m,r;
    scanf("%d",&t);
    for(p=1;p<=t;p++){
        scanf("%llu %llu %llu",&n, &k, &m);
        r=((n*(n-1))/2)+2;
        printf("Case %d: %llu\n",p,((unsigned long long int)(ceil((pow(k,r))))%m));
    }
    return 0;
}
