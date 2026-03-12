#include<stdio.h>
int main()
{
    int i,n,a[5],max;
    n=sizeof a/sizeof a[0];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n");
    max=a[0];
    for(i=0;i<n;i++)
    {
	if(max<a[i])
	max=a[i];
    }
    printf("%d\n",max);
}

