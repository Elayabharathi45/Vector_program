#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a[]= {1, 2, 0, 0, 3, 0, 4, 0, 5};
    int i,j,k=0,n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        a[k++]=a[i];
    }
    while(k<n)
    a[k++]=0;
    
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}

#include <stdio.h>
int main() 
{
    int a[] = {1, 2, 0, 0, 3, 0, 4, 0, 5,0,0};
    int n = sizeof(a) / sizeof(a[0]);
    int i, j = 0;
    for (i = 0; i < n; i++) 
    {
        if (a[i] != 0) 
        {
            if (i != j) 
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            j++;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
