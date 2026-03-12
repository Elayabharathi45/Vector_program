#include<stdio.h>
int main()
{
    int i,j,k=3,a[]={1,2,3,4,5};
    int size=sizeof a/sizeof a[0];
    //printf("enter pos\n");
    //scanf("%d",&k);
    if(k>=size){
    printf("invalid pos to operate\n");
    return 0;
    }
    for(i=0;i<k;i++)
    {
        int first=a[0];
        for(j=0;j<size;j++)
        a[j]=a[j+1];
        a[size-1]=first;
    }
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
}