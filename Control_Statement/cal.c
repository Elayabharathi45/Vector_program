#include<stdio.h>
int main()
{
	int a,b,c,d,e,g;
	char op;
	float f;
	printf("enter the varible a:");
	scanf("%d",&a);
	printf("enter the varible b:");
	scanf(" %d",&b);
	printf("enter the op: ");
	scanf(" %c",&op);
	printf("\n");
	if(op=='+')
	{
		c=a+b;
		printf("add a and b:%d\n",c);
	}
	else if(op=='-')
	{
		d=a-b;
		printf("sub a and b:%d\n",d);
	}
	else if(op=='*')
	{
		e=a*b;
		printf("multi a and b:%d\n",e);
	}
	else if(op=='/')
	{
		f=(float)a/b;
		printf("div a and b:%.2f\n",f);
	}
	else if(op=='%')
	{
		g=a%b;
		printf("mod a and b:%d\n",g);
	}
	else
	printf("nothing");
	return 0;
}
