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
int count(struct nodes* ptr)
{
    int c=0;
    while(ptr!=0)
    {
        c++;
        ptr=ptr->next;
    }
    return c;
}
int find_middle(struct nodes* head)
{
    int node_count=count(head);
    int mid=node_count/2;
    while(mid--)
    {
        head=head->next;
    }
    return head->val;
}
int main()
{
    struct nodes* head1=add_begin(7);
    head1->next=add_begin(2);
    head1->next->next=add_begin(3);
    head1->next->next->next=add_begin(4);
    head1->next->next->next->next=add_begin(5);
    head1->next->next->next->next->next=add_begin(1);
 
    
    int res=find_middle(head1);
    printf("mid node=%d",res);
}