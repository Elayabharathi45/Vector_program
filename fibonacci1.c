#include<stdio.h>
int main()
{
        int i,n,a=0,b=1,x,count=0;
        printf("enter the num: ");
        scanf("%d",&n);
        for(i=1;count<n-1;i++)
        {
            x=a+b;
	    count++;
            a=b;
            b=x;
        }
	printf("%d\n",a);
}

