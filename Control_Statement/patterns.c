#include<stdio.h>
int main()
{
	int i,j,n=5,s,k;
	for(i=0;i<n;i++)
	{
//		for(s=0;s<i;s++)
//		printf("  ");

		for(j=0,k=1;j<n+i;j++)
//		printf("* ");
		{																						
		if(j<n-i-1)
		printf("  ");
		else
		printf("%d ",k++);
		}
		
		printf("\n");
	}
}
		
