#include <stdio.h>
#include<stdlib.h>
struct nodes
{
    int val;
    struct nodes* next;
};
struct nodes* add_end(int data)
{
    struct nodes* temp;
    temp=(struct nodes*)malloc(sizeof(struct nodes));
    
    temp->val=data;
    temp->next=NULL;
    return temp;
}
void print(struct nodes* temp)
{
    while(temp)
    {
        printf("%d ",temp->val);
        temp=temp->next;
    }
}
struct nodes* rotate(struct nodes* head, int k)
{
    if(!head)   return NULL;
    for(int i=0;i<k;i++)
    {
        struct nodes* curr=head;
        while(curr->next!=NULL)
        curr=curr->next;
        
        curr->next=head;
        curr=curr->next;
        head=head->next;
        curr->next=NULL;
    }
    return head;
}
int main()
{
    struct nodes* head=add_end(1);
    head->next=add_end(2);
    head->next->next=add_end(3);
    head->next->next->next=add_end(4);
    head->next->next->next->next=add_end(5);
    
    struct nodes* list=rotate(head,2);
    print(list);
}