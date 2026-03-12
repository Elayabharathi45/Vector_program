//input n=8 0000 1000
//output n=16 0001 0000
/*
#include<stdio.h>
int main()
{
    int n=8; 
    int rev=0;
    for(int i=0;i<8;i++)
    {
        rev=rev<<1;
        rev=rev|(n&1);
        n=n>>1;
    }
    printf("%d",rev);
}
*/

#include<stdio.h>
int main()
{
	int num=1342177280;
	int x,y,i,j;
	for(i=0,j=31;i<j;i++,j--)
	{
	    x=num>>i & 1;
	    y=num>>j & 1;
	    if(x!=y)
        {
            num=num^(1<<i);
            num=num^(1<<j);
        }
	}
    printf("num=%d\n",num);
}
