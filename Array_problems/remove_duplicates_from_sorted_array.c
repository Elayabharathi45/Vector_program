#include<stdio.h>
int main()
{
    int i,j,k=0,a[]={1,1,2,3,3,3,4,5,5};
    int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i-1])
        a[k++]=a[i];
    }
    for(j=0;j<k;j++)
    printf("%d ",a[j]);
}