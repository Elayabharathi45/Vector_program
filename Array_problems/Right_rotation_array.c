#include<stdio.h>
int main()
{
    int i,j,k,a[]={1,2,3,4,5};
    int size=sizeof a/sizeof a[0];
    printf("enter pos\n");
    scanf("%d",&k);
    if(k>=size){
    printf("invalid pos to operate\n");
    return 0;
    }
    for(i=0;i<k;i++)
    {
        int last=a[size-1];
        for(j=size-1;j>0;j--)
        a[j]=a[j-1];
        a[0]=last;
    }
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
}