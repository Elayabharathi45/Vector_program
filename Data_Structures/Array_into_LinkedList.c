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
struct nodes* arraytolist(int arr[],int size)
{
    struct nodes* head=addnode(arr[0]);
    struct nodes* curr=head;
    for(int i=1;i<size;i++)
    {
        curr->next=addnode(arr[i]);
        curr=curr->next;
    }
    return head;
}
void print(struct nodes* head)
{
    while(head!=NULL)
    {
        printf("%d ",head->val);
        head=head->next;
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    struct nodes* res=arraytolist(a,size);
    print(res);
}