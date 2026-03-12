//input n=10 
//output 0000 1010

#include<stdio.h>
int main()
{
    int num=10;
    for(int i=7;i>=0;i--)
    printf("%d",(num>>i)&1);
}