#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,count,rem,num,sum;
//	scanf("%d",&num);
//	n=num;
	for(n=1;n<=10000;n++)
	{
	    num=n;
            count=0;
	    sum=0;
    	    for(i=num;i;i=i/10)
	    count++;
    	    while(num)
	    {
	    rem=num%10;
	    sum=sum+pow(rem,count);
	    num=num/10;
	    }
	    if(sum==n)
	    printf("%d\n",n);
	}
}

