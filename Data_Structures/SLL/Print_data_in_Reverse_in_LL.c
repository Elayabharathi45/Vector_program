#include<stdio.h>
#include<stdlib.h>
struct nodes
{
    int val;
    struct nodes* next;
};
struct nodes* addnode(int data)
{
    struct nodes* temp=(struct nodes*)malloc(sizeof(struct nodes));
    temp->val=data;
    temp->next=NULL;
    
    return temp;
}
void reverseprint(struct nodes* head)
{
    struct nodes* ptr=head,*p=head;
    int c=0,i,j;
    while(ptr!=NULL)
    {
        c++;
        ptr=ptr->next;
    }
    for(i=0;i<c;i++)
    {
        head=p;
        for(j=0;j<c-i-1;j++)
        head=head->next;
        
        printf("%d ",head->val);
    }
}
/*
void reverseprint(struct nodes* head)
{
    if(head!=NULL)
    {
        reverseprint(head->next);
        printf("%d ",head->val);
    }
}
void reverseprint(struct nodes* head)
{
    struct nodes* ptr=head;
    struct nodes* ptr1=head;
    int c=0;
    while(ptr!=NULL)
    {
        c++;
        ptr=ptr->next;
    }
    struct nodes** p=(struct nodes**)malloc(c*sizeof(struct nodes*));
    for(int i=0;i<c;i++)
    {
        p[i]=ptr1;
        ptr1=ptr1->next;
    }
    for(int i=c-1;i>=0;i--)
    printf("%d ",p[i]->val);
}*/
void print(struct nodes* head)
{
    struct nodes* curr=head;
    while(curr!=NULL)
    {
        printf("%d ",curr->val);
        curr=curr->next;
    }
}
int main()
{
    struct nodes* head=addnode(1);
    head->next=addnode(2);
    head->next->next=addnode(3);
    head->next->next->next=addnode(4);
    head->next->next->next->next=addnode(5);
 
    reverseprint(head);
}