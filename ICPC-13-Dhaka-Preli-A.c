#include<stdio.h>
int main()
{
    int T,i,j,M,N,wcn[10],W,C;
    int k,cokis[45],u,v;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d",&N &M);
        for(j=0;j<N;j++){
            scanf("%d", wcn[j]);
            scanf("%d", cokis[j]);
        }
        for(k=0;k<M;k++){
            scanf("%d %d", &u, &v);
        }
    }
    return 0;
}
