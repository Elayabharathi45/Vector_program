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

struct nodes* delete_middle(struct nodes* head)
{
    if(!head)   return NULL;
    int c=0;
    struct nodes* p1=head,*p2=head;
    while(p1!=NULL)
    {
        c++;
        p1=p1->next;
    }
    int mid=c/2;
    for(int i=0;i<mid-1;i++)
    {
        p2=p2->next;
    }
    p2->next=p2->next->next;
    
    //free(curr);
    return head;
}
int main()
{
    struct nodes* head=add_end(1);
    head->next=add_end(2);
    head->next->next=add_end(3);
    head->next->next->next=add_end(4);
    head->next->next->next->next=add_end(5);
    head->next->next->next->next->next=add_end(6);
    
    struct nodes* list=delete_middle(head);
    print(list);
}