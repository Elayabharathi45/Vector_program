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
struct nodes* odd_index_remove(struct nodes** head)
{
    struct nodes* temp=*head,*prv;
    while(temp!=NULL)
    {
        if(temp->val % 2 !=0)
        {
            struct nodes* del=temp;
            if(temp==*head)
            {
                *head=temp->next;
                temp=*head;
            }
            else
            {
                prv->next=temp->next;
                temp=temp->next;
            }
            free(del);
        }
        else
        {
            prv=temp;
            temp=temp->next;
        }
    }
    return *head;
}
int main()
{
    struct nodes* head=add_end(3);
    head->next=add_end(4);
    head->next->next=add_end(1);
    head->next->next->next=add_end(5);
    head->next->next->next->next=add_end(2);
    head->next->next->next->next->next=add_end(6);
    
    struct nodes* res=odd_index_remove(&head);
    print(res);
}