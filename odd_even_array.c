#include<stdio.h>
int main()
{
    int odd=0,even=0,i,n,a[5];
    n=sizeof a/sizeof a[0];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n");
    for(i=0;i<n;i++)
    {
	if(a[i]%2==0)
	even++;
	else
	odd++;
    }
    printf("%d %d",even,odd);
}
