#include<stdio.h>
#include<stdlib.h>
main()
{
    FILE *f1;
    int n;
    f1=fopen("Newfile.txt","w");
    scanf("%d",&n);
    fprintf(f1,"%d\n",n);
    fclose(f1);
    f1=fopen("Newfile.txt","r");
    fscanf(f1,"%d",&n);
    printf("%d",n);
    fclose(f1);
}
