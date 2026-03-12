#include<stdio.h>
int main()
{
	int x,y,a=5,b=6;
	x=a++ + b++;
	y=++a + ++a;
	printf("%d %d\n",x,y);
}
