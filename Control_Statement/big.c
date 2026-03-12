#include<stdio.h>
int main()
{
        int x,y,z;
        printf("Enter the x,y,z values\n");
        scanf("%d%d%d",&x,&y,&z);
        if( (x < z)&&(y < z) )
        printf("z=%d is greater\n",z);
        else if( (x < y)&&(z < y) )
        printf("y=%d is greater\n",y);
        else if( (y < x)&&(z < x) )
        printf("x=%d is greater\n",x);
        else if( (y == z)&&(x < y) )
        printf("y,z are equal & greater than x\n");
        else if( (x == y)&&(z < x) )
        printf("x,y are equal & greater than z\n");
        else if( (x == z)&&(y < z) )
        printf("x,z are equal & greater than y\n");
        else
        printf("x,y,z are equal\n");
}
