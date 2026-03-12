#include<stdio.h>
void binary(int);
int main()
{
	int n,x,y,i,j;
	printf("Enter the number\n");
	scanf("%d",&n);


	binary(n);

	for(i=31,j=0;i>j;i--,j++)
   		{
		x = n>>i&1;
		y = n>>j&1;
			if(x!=y)
			{
			n = n^1<<i;
			n = n^1<<j;	
			}	
  		 }
          	 binary(n);
}

void binary(int num)
{	
	int i;
	for(i=31;i>=0;i--)
	printf("%d",num>>i&1);
	printf("\n");	
}
