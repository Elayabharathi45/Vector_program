#include<stdio.h>
int main()
{
    int i,j,n,temp,a[6];
    n=sizeof a/sizeof a[0];
    printf("%d\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n");
    for(i=0;i<n;i++)
    { 
	for(j=i+1;j<n;j++)
	{
	    if(a[i] > a[j])
	    {
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	    }
	}
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
