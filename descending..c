#include<stdio.h>
int main(){
    double A,B,C,t;
    while(scanf("%lf%lf%lf",&A,&B,&C)!=EOF){
        if(A>=B&&B<=C&&C>=A){
            t=A;
            A=C;
            C=B;
            B=t;
        }
        else if(A<=B&&B<=C){
            t=A;
            A=C;
            C=t;
        }
        else if(A<=B&&B>=C&&C<=A){
            t=A;
            A=B;
            B=t;
        }
        else if(A>=B&&B<=C&&C<=A){
            t=B;
            B=C;
            C=t;
        }
        else if(A<=B&&B>=C&&C>=A){
            t=A;
            A=B;
            B=C;
            C=t;
        }
        if(A>=B+C)
            printf("NAO FORMA TRIANGULO\n");
        else if((A*A)==((B*B)+(C*C)))
            printf("TRIANGULO RETANGULO\n");
        else if((A*A)>((B*B)+(C*C)))
            printf("TRIANGULO OBTUSANGULO\n");
        else if((A*A)<((B*B)+(C*C)))
            printf("TRIANGULO ACUTANGULO\n");
        if(A==B&&A==C)
            printf("TRIANGULO EQUILATERO\n");
        else if(A==B||A==C||B==C)
            printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
