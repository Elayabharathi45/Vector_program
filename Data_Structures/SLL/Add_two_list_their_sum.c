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
struct nodes* add_list(struct nodes* l1,struct nodes* l2)
{
    struct nodes dummy;
    struct nodes* tail=&dummy;
    int carry=0;
    while(l1!=0 || l2!=0 || carry!=0)
    {
        int sum=carry;
        if(l1){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2){
            sum+=l2->val;
            l2=l2->next;
        }
        carry=sum/10;
        struct nodes* new_node=(struct nodes*)malloc(sizeof(struct nodes));
        new_node->val=sum%10;
        new_node->next=NULL;
        
        tail->next=new_node;
        tail=new_node;
    }
    return dummy.next;
}
int main()
{
    struct nodes* head1=add_begin(7);
    head1->next=add_begin(2);
    head1->next->next=add_begin(3);
    
    struct nodes* head2=add_begin(5);
    head2->next=add_begin(4);
    head2->next->next=add_begin(8);
    
    struct nodes* res=add_list(head1,head2);
    print(res);
}