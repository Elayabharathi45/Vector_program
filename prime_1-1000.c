#include<stdio.h>
int main()
{
	int k,i,num,c=0;
	for(k=1;k<1000;k++)
	{
		num=k;
		for(i=2;i<num;i++)
		{	
			if(num%i==0)
			break;
		}
		if(i==k)
		c++;
		if(c==50)
		printf("%d",k);
	}
	printf("\n");
}
