#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a[]={3,5,7,4,9,9,4,8,6,5,10,55};
    int i,n=sizeof(a)/sizeof(a[0]);
    int first_large=-1,second_large=-1,third_large=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]>first_large)
        {
            third_large=second_large;
            second_large=first_large;
            first_large=a[i];
        }
        else if(a[i]>second_large && a[i]!=first_large)
        {
            third_large=second_large;
            second_large=a[i];
        }
        else if(a[i]>third_large && a[i]!=second_large && a[i]!=first_large)
        third_large=a[i];
    }
    printf("large=%d second_large=%d third_large=%d",first_large,second_large,third_large);
}