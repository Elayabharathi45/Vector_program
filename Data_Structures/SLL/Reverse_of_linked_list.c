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
void reverselink(struct nodes** ptr)
{
    struct nodes* r,*q=0;
    while(*ptr)
    {
        r=q;
        q=*ptr;
        *ptr=(*ptr)->next;
        q->next=r;
    }
    *ptr=q;
}
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
 
    reverselink(&head);
    
    print(head);
}