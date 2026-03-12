#include<stdio.h>
#include<stdlib.h>
int compare(const void* a,const void* b)
{
    return (*(int*)a - *(int*)b);
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a[] = {10, 90, 49, 2, 1, 5, 23};
    int i,j,n = sizeof(a)/sizeof(a[0]);
    qsort(a,n,sizeof(int),compare);
    for(i=0;i<n-1;i+=2)
    {
        swap(&a[i],&a[i+1]);
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
