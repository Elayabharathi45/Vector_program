//input bin, pos=2 ,Len=5
//output 01011 = 11
//extract bit from pos in length

#include<stdio.h>
int main()
{
    int bit=0b0000000000101101;
    int pos=2,len=5;
    int mask=(1<<len)-1;
    int ext=(bit>>pos)&mask;
    printf("%d",ext);
}