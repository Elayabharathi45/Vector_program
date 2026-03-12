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
int palindrome_list(struct nodes* head)
{
    int a[100];
    int i=0,j;
    struct nodes* temp=head;
    while(temp)
    {
        a[i++]=temp->val;
        temp=temp->next;
    }
    for(j=0;j<i/2;j++)
    {
        if(a[j]!=a[i-j-1])
        return 0;
    }
    return 1;
}
int main()
{
    struct nodes* head=add_begin(1);
    head->next=add_begin(2);
    head->next->next=add_begin(3);
    head->next->next->next=add_begin(2);
    head->next->next->next->next=add_begin(5);
    
    if(palindrome_list(head))
    printf("palindrome_list\n");
    else
    printf("Not a palindrome_list\n");
    
}