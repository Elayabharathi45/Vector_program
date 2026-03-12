//input 0000 1010, d=2
//output 0010 1000 = 40

#include<stdio.h>
int main()
{
    int bit=0b00001010;
    int d=2;
    int res=(bit<<d)|(bit>>(8-d));
    printf("%d\n",res);
}