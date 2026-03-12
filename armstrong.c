#include<stdio.h>
#include<math.h>
int main()
{
	int i,r,n,num,sum=0,count=0;
	printf("enter the num: ");
	scanf("%d",&n);
	num=n;
	i=n;
	while(i){	
	count++;
	i=i/10;	
	}
	while(n)
	{
	    r=n%10;
	    sum=sum+ pow(r,count);
	    n=n/10;
	}
	if(sum==num)	
	printf("it is a armstrong num\n");
	else
	printf("not a armstrong\n");
}

