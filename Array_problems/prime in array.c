#include<stdio.h>
main()
{
    int i,j,n,a[5];
    n=sizeof a/sizeof a[i];
    printf("%d\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n");
    for(i=0;i<n;i++)
    {
	for(j=2;j<=a[i];j++)
	{
	if(a[i]%j==0)
	break;
	}
	if(a[i]==j)
	printf("%d\n",a[i]);
    }
}
