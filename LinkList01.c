#include<stdio.h>

struct node
{
    int data;
    node *next;
};
node *head;
int main()
{
    head=NULL;
    input(1);
    input(2);
    input(3);
    return 0;
}
void input (int x)
{
    node *temp = new node();
    temp->data = x;
    temp->next = NULL;
    if(head==NULL){
        head = temp;
    }
    temp->next = head;
    head = temp;
}
void output(){
    node *temp1 = head;

    while(temp1!=NULL){
        printf("%d",temp1->data);
        temp1 = temp1->next;
    }
}
