#include<stdio.h>
int main()
{
	int n,a=0,b=1,c;
	printf("%d %d ",a,b);
	for(n=2;b<=100;)
	{
		c=a+b;
		a=b;
		b=c;
		if(c>=100)
		break;
		printf("%d ",c);	
	}
	printf("\n");
}
