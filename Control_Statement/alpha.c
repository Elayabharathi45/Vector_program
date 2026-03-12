#include<stdio.h>
int main()
{
        char ch;
        printf("Enter the char\n");
        scanf("%c",&ch);
        if(  ( (ch>='A')&&(ch<='Z') ) || ( (ch>='a')&&(ch<='z') )  )
        {
                ch = ch^32;
                printf("after conversion, ch = %c\n",ch);
        }
        else
        printf("not an alphabet\n");
}
