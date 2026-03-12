#include<stdio.h>
int main()
{
	int i=1,fact=1,n;
	printf("enter the num: ");
	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	fact=fact*i;

	while(n)
	{
	fact=fact*n;
	n--;
	}
	printf("factorial is %d\n",fact);
}
	
