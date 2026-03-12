#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the num\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		break;
	}
	if(i==n)
		printf("prime\n");
	else
		printf("not a prime\n");
}
w