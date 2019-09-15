#include<stdio.h>

int main() {

int in, i, c;

while( scanf("%d",&in) == 1) {
for(i=1; i<=in;i++) {
if(in%i == 0)
++c;
}

if(c==2) printf("Prime\n");
else printf("Not Prime.\n");
c = 0;
}
return 0;
}
