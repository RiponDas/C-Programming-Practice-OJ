#include<stdio.h>
#include<math.h>
int main()
{
    long int R,L,W;
    double area1,m,theta,theta1,tri1,tri,subarea1,subarea;
    while(scanf("%ld %ld %ld",&R,&L,&W)!=EOF){
        if(R>=L && R>=W){
            printf("%ld\n",L*W);
        }
        else if(((2*R)==W && W<=L) ||((2*R)==L && W>=L)){
                area1=(3.1416*(R*R));
            printf("%lf\n",area1);
        }
        else if((2*R)>W && (2*R)<=L){
            m=(R-(W/2));
            theta=asin(m/R);
            theta1=(90-theta)*2;
            tri1=sqrt((R*R)-(m*m));
            tri=tri1*m;
            subarea1=(3.1416*theta1*R*R)/360;
            subarea=(subarea1-tri)*2;
            area1=(3.1416*R*R)-subarea;
            printf("%lf\n",area1);

        }
    }
    return 0;
}
