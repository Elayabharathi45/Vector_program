#include <stdio.h>
#include<stdlib.h>
struct nodes
{
    int val;
    struct nodes* next;
};
struct nodes* add_begin(int data)
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
void remove_Duplicate(struct nodes* head) 
{
    while (head != NULL) 
    {
        struct nodes* curr = head;
        while (curr->next != NULL) 
        {
            if (curr->next->val == head->val) 
            curr->next = curr->next->next;
            else 
            curr = curr->next;
        }
        head = head->next;
    }
}
int main()
{
    struct nodes* head=add_begin(3);
    head->next=add_begin(2);
    head->next->next=add_begin(3);
    head->next->next->next=add_begin(3);
    head->next->next->next->next=add_begin(1);
    head->next->next->next->next->next=add_begin(3);
    
    remove_Duplicate(head);
    print(head);
}