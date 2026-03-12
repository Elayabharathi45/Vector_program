#include<stdio.h>
int main()
{
	int k,sum,i,fact,num,rem;
	for(k=1;k<=1000;k++)
	{
		sum=0;	num=k;
		while(num)
		{
			rem=num%10;
			fact=1;
			for(i=1;i<=rem;i++)
				fact=fact*i;
			sum=sum+fact;
			num=num/10;
		}
		if(k==sum)
		printf("%d ",sum);
	}
	printf("\n");
}
