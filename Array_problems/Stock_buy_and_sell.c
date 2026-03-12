#include<stdio.h>
int main()
{
    int a[] = {7, 10, 1, 3, 6, 9, 2};
    int i,j,c,n=sizeof(a)/sizeof(a[0]);
    int small=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<small)
        {
        small=a[i];
        c=i;
        }
    }
    int large=a[c];
    for(j=c;j<n;j++)
    {
        if(a[j]>large)
        large=a[j];
    }
    printf("%d ",large-small);
}

#include<stdio.h>
int main()
{
    int a[] = {7, 10, 1, 3, 6, 9, 2};
    int i,j,c,n=sizeof(a)/sizeof(a[0]);
    int res=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[j]-a[i])>res)
            res=a[j]-a[i];
        }
    }
    printf("%d",res);
}

#include<stdio.h>
int main()
{
    int a[] = {7, 10, 1, 3, 6, 9, 2};
    int i,j,c,n=sizeof(a)/sizeof(a[0]);
    int max_profit=0,small=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<small)
        small=a[i];
        else
        {
            int temp=a[i]-small;
            if(temp > max_profit)
            max_profit=temp;
        }
    }
    printf("%d",max_profit);
}