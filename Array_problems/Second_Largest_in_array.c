#include <stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    int a[]={23,4,67,98,21,98,43,6};
    int i,j,n=sizeof(a)/sizeof(a[0]);
    qsort(a,n,sizeof(int),compare);
    for(i=n-2;i>=0;i--)
    {
        if(a[i]!=a[n-1]){
        printf("second largest=%d\n",a[i]);
        return 0;
        }
    }
}

#include <stdio.h>
#include<string.h>
int main()
{
    int a[]={3,5,7,4,9,9,4,8,6,5};
    int i,j,n=sizeof(a)/sizeof(a[0]);
    int large=-1,second_large=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]>large)
        large=a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>second_large && a[i]!=large)
        second_large=a[i];
    }
    printf("large=%d second_large=%d",large,second_large);
}

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a[]={3,5,7,4,9,9,4,8,6,5};
    int i,j,n=sizeof(a)/sizeof(a[0]);
    int first_large=-1,second_large=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]>first_large)
        {
            second_large=first_large;
            first_large=a[i];
        }
        else if(a[i]<first_large && a[i]>second_large)
//	else if(a[i]>second_large && a[i]!=first_large)
        second_large=a[i];
    }
    printf("first_large=%d second_large=%d",first_large,second_large);
}