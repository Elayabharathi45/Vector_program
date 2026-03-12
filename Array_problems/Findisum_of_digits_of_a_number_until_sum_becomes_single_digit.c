#include<stdio.h>
int main()
{
    int i,j,n=1234,sum=0,rem;
    while(n>0 || sum>9)
    {
        if(n==0)
        {
            n=sum;
            sum=0;
        }
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d",sum);
}

#include<stdio.h>
int main()
{
    int i,j,n=5674,sum=0,rem,sum1=0,rem1;
    while(n)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    while(sum)
    {
        rem1=sum%10;
        sum1=sum1+rem1;
        sum/=10;
    }
    printf("%d",sum1);
}