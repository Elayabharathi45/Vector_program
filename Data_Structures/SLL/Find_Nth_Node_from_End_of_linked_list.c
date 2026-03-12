#include<stdio.h>
#include<stdlib.h>
struct nodes
{
    int val;
    struct nodes* next;
};
struct nodes* addnode(int data)
{
    struct nodes* temp=(struct nodes*)malloc(sizeof(struct nodes));
    temp->val=data;
    temp->next=NULL;
    
    return temp;
}
/*
struct nodes* findlist(struct nodes* head,int N)
{
    int c=0;
    struct nodes* temp=head;
    while(temp)
    {
        c++;
        temp=temp->next;
    }
    for(int i=1;i<c-N+1;i++)
    {
        head=head->next;
    }
    return head;
}*/
struct nodes* findlist(struct nodes* head, int n) 
{
    struct nodes* ptr1=head,*ptr2=head;
    int ctr = 0;
    while (ptr1 != NULL) 
    {
        ptr1 = ptr1->next;
        if (ctr >= n) 
            ptr2 = ptr2->next;
            
        ctr++;
    }
    if (ctr < n)
        return NULL;
        
    return ptr2;
}
void print(struct nodes* head)
{
    struct nodes* curr=head;
    while(curr!=NULL)
    {
        printf("%d ",curr->val);
        curr=curr->next;
    }
}
int main()
{
    struct nodes* head=addnode(1);
    head->next=addnode(2);
    head->next->next=addnode(3);
    head->next->next->next=addnode(4);
    head->next->next->next->next=addnode(5);
 
    struct nodes* res=findlist(head,2);
    //printf("%d\n",res->val);
    print(res);
}