#include<stdio.h>
int main()
{
	int n,fact,sum=0;
	printf("enter the num\n");
	scanf("%d",&n);
	fact=n;
	while(n)
	{
		sum=sum*10+(n%10);
		n/=10;
	}
	if(sum==fact)
	printf("palindrome\n");
	else
	printf("not a palindrome\n");	
}
