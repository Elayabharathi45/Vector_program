#include<stdio.h>
int main()
{
	int i,j,s,x;
	int n=5;

	for (i=0;i<n;i++)
	{
		for(j=0,x=0;j<=i;j++)
		{
		if(i%2==0){
		printf("%d ",x+1);
		x=x+2;
		}
		else{
   		printf("%d ",x+2);
		x=x+2;
		}
		}
//		for(s=0;s<n-i-1;s++)
//		printf("  ");
	
	printf("\n");
	}
}
