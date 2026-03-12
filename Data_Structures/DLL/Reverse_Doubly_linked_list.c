#include <stdio.h>
#include<stdlib.h>
struct nodes
{
    int val;
    struct nodes* next;
    struct nodes* prev;
};
struct nodes* add_begin(int data)
{
    struct nodes* temp;
    temp=(struct nodes*)malloc(sizeof(struct nodes));
    
    temp->val=data;
    temp->next=NULL;
    temp->prev=NULL;
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
struct nodes* reverse_link(struct nodes* head)
{
    if(!head)   
    return NULL;
    
    struct nodes* temp=head->prev;
    head->prev=head->next;
    head->next=temp;
    
    if(head->prev==NULL) 
    return head;
    
    return reverse_link(head->prev);
}
int main()
{
    struct nodes* head1=add_begin(1);
    head1->next=add_begin(2);
    head1->next->prev=head1;
    head1->next->next=add_begin(3);
    head1->next->next->prev=head1->next;
    head1->next->next->next=add_begin(4);
    head1->next->next->next->prev=head1->next->next;
    
    struct nodes* head=reverse_link(head1);
    print(head);
}