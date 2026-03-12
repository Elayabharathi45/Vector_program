//input 0000 1100
//output 12

#include<stdio.h>
int main()
{
	int n=1100,base=1,sum=0;
	while(n)
	{
	    int rem=n%10;
	    sum=sum + rem*base;
	    base=base*2;
	    n=n/10;
	}
	printf("%d",deci);
}