#include<stdio.h>
int main()
{
	int i=1,num1,num2;
	printf("enter the num1:  ");
	scanf("%d",&num1);
	printf("enter the num2:  ");
	scanf("%d",&num2);
	multi:
	printf("%d*%d=%d\t%d*%d=%d\n",num1,i,num1*i,num2,i,num2*i);
	i++;
	if (i<=10)
	goto multi;

}
