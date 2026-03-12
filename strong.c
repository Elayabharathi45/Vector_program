#include<stdio.h>
int main()
{
    int i,n,rem,temp,sum=0,fact=1;
    printf("enter the num: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    { 
	rem=n%10;
	for(i=1;i<=rem;i++)
	{
	    fact=fact*i;
	}
	sum=sum+fact;
	fact=1;
	n=n/10;
    }
    if(sum==temp)
    printf("strong");
    else 
    printf("not strong");
}
