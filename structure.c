#include<stdio.h>
#include<stdio.h>
struct cse13
{
    char name[20];
    int id;
    float cgpa;
};
void print(struct cse13 student[])
{
    int i;
    for(i=1; i<=10; i++)
    {
        printf("%s",student[i].name);
        printf("%d",student[i].id);
        printf("%f",student[i].cgpa);
    }
}
void main()
{
    struct cse13 student[10];
    int i;
    for(i=1; i<=10; i++)
    {
    scanf("%s %d %f",student[i].name,&student[i].id,&student[i].cgpa);
    }
    print(student);
}
