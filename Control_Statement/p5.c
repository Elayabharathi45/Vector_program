#include<stdio.h>
#include<unistd.h>
int main()
{
	int num,pos;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(pos=31;pos>=0;pos--)
	{
	printf("%d",num>>pos&1);
	sleep(1);
	}
	printf("\n");
}
