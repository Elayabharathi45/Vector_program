#include<stdio.h>
int main()
{
    int i,j,n,big1,big2,a[6];
    n=sizeof a/sizeof a[0];
    printf("%d\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n");
    for(i=0;i<n;i++)
    {
	if(a[i]!=a[i+1])
	break;
    }
    if(a[i]>a[i+1])
    big1=a[i],big2=a[i+1];
    else
    big1=a[i+1],big2=a[i];
    for(i=i+2;i<n;i++)
    {
	if(big1<a[i])
	big2=big1,big1=a[i];
	else if(big2<a[i] && a[i]!=big1)
	big2=a[i];
    }
    printf("big1=%d\nbig2=%d\n",big1,big2);
}
