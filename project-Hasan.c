#include<stdio.h>
void main()
{
    int i,j,n,m;
    char dep[10];
    printf("How many department included of your Institute?");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the name of the Department:");
        for(i=0;i<10;i++){
            scanf("%c",&dep[i]);
        }
       printf("Welcome to the Department of ");
       for(i=0;i<10;i++){
       printf("%c",dep[i]);
       }
       printf("How many students consisted of the Department:");
       scanf("%d",&m);
       /*j=1;
       while(j<=m){
        FILE *f1;
    char ch;
    f1=fopen("file","w");
    while((ch=getchar())!=EOF)
        putc(ch,f1);
    fclose(f1);
       }*/
       for(i=0;i<m;i++){
            printf("Enter Name:");
            gets(st.name[i]);
            printf("")

       }
    }

}
