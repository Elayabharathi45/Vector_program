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
    /*
    struct nodes dummy;
    struct nodes* tail=&dummy;*/
    
    while(list1 && list2)
    {
        if(list1->val<list2->val)
        {
            list1->next=merge(list1->next,list2);
            return list1;
        }
        else
        {
            list2->next=merge(list2->next,list1);
            return list2;
        }
        //tail=tail->next;
    }
    /*
    tail->next=list1?list1:list2;
    return dummy.next;*/
}
int main()
{
    struct nodes* head1=add_begin(1);
    head1->next=add_begin(2);
    head1->next->next=add_begin(3);
    
    struct nodes* head2=add_begin(4);
    head2->next=add_begin(5);
    head2->next->next=add_begin(6);
    
    printf("Head1 nodes\n");
    print(head1);
    printf("\nHead2 nodes\n");
    print(head2);
    printf("\nMerge nodes\n");
    struct nodes* result=merge(head1,head2);
    print(result);
}