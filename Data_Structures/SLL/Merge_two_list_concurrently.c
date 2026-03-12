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
struct nodes* merge(struct nodes* list1,struct nodes* list2)
{
    if(!list1) return list2;
    if(!list2) return list1;
    
    struct nodes dummy;
    struct nodes* tail=&dummy;
    
    while(list1 && list2)
    {
        tail->next=list1;
        list1=list1->next;
        tail=tail->next;
        
        tail->next=list2;
        list2=list2->next;
        tail=tail->next;
    }
    tail->next=list1?list1:list2;
    return dummy.next;
}
int main()
{
    struct nodes* head1=add_begin(1);
    head1->next=add_begin(2);
    head1->next->next=add_begin(3);
    
    struct nodes* head2=add_begin(4);
    head2->next=add_begin(5);
    head2->next->next=add_begin(6);
    head2->next->next->next=add_begin(7);
    head2->next->next->next->next=add_begin(8);
    
    printf("Head1 nodes\n");
    print(head1);
    printf("\nHead2 nodes\n");
    print(head2);
    printf("\nMerge nodes\n");
    struct nodes* result=merge(head1,head2);
    print(result);
}