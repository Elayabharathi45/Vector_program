#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a[]= {1,2,3,4,5,6,7,8},k=3;
    int i,j,n=sizeof(a)/sizeof(a[0]);
    int start,end;
    for(i=0;i<n;i+=k)
    {
        start=i;
        end=(i+k-1)<(n-1) ? i+k-1 : (n-1);
        while(start<end)
        {
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
            start++;
            end--;
        }
        
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}