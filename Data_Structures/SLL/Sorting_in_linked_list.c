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
void swap(struct nodes *a, struct nodes* b)
{
    int tem=a->val;
    a->val=b->val;
    b->val=tem;
}
void sort(struct nodes* head)
{
    struct nodes* temp=head;
    while(temp)
    {
        struct nodes* min_node=temp;
        struct nodes* next_node=temp->next;
        while(next_node)
        {
            if(min_node->val > next_node->val)
            {
                min_node=next_node;
            }
            next_node=next_node->next;
        }
        swap(min_node,temp);
        temp=temp->next;
    }
}

int main()
{
    struct nodes* head=add_end(3);
    head->next=add_end(4);
    head->next->next=add_end(1);
    head->next->next->next=add_end(5);
    head->next->next->next->next=add_end(2);
    
    print(head);
    printf("\n");
    sort(head);
    print(head);
}