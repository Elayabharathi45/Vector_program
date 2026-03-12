#include<stdio.h>
int main()
{
    int i,j;
    int a[]={2,2,47,6,2,6,5,5,6};
    int size=sizeof a/sizeof a[0];
    for(i=0;i<size;i++)
    {
        int c=1;
        if(a[i]!=-1)
        {
            for(j=i+1;j<size;j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                    a[j]=-1;
                }
            }
            if(c>1)
            printf("%d     %d\n",a[i],c);
        }
    }
}