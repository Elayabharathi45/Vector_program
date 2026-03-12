#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a[]= {1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1};
    int i,j,n=sizeof(a)/sizeof(a[0]);
    int max_count=0,count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
        }
        else if(max_count<count)
        {
            max_count=count;
            count=0;
        }
    }
    printf("%d ",max_count);
}