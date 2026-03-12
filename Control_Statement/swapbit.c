#include<stdio.h>
void binary(int);

int main()
{
	int num,p1,p2,x,y;
	printf("enter the num: ");
	scanf("%d",&num);
	printf("enter the pos1 and pos2: ");
	scanf("%d%d",&p1,&p2);
	
	binary(num);

	x=num>>p1&1;
	y=num>>p2&1;
	if(x!=y)
	{
		num=num^(1<<p1);
		num=num^(1<<p2);
	}
	binary(num);

	
}
void binary(int num)
{	
	int i;
	for(i=31;i>=0;i--)
	printf("%d",num>>i&1);
	printf("\n");
}


