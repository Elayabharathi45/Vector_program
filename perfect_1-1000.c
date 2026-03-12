#include<stdio.h>
int main()
{
	int sum,num,i,k;
	for(k=1;k<1000;k++)
	{
		sum=0; num=k;
		for(i=1;i<num;i++)
		{
			if(num%i==0)		
			sum=sum+i;
		}
		if(sum==k)
		printf("%d ",sum);
	}
	printf("\n");
}
