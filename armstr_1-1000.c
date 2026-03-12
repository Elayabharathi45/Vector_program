#include<stdio.h>
#include<math.h>
int main()
{
	int k,sum,i,num,c,rem,count=0;
	for(k=1;count<10;k++)
	{
		sum=0; c=0; num=k;
		for(i=num;i;i/=10)
			c++;
		while(num)
		{
			rem=num%10;	
			sum=sum+pow(rem,c);
			num/=10;
		}
		if(sum==k)
		printf("%d ",sum);
		count++;
	}
	printf("\n");
}
