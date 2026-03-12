#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="bharathi";
    int i,j,k=3;
    int len=strlen(str);
    for(i=0;i<k;i++)
    {
        char temp=str[0];
        for(j=0;str[j]!='\0';j++)
        str[j]=str[j+1];
        
        str[len-1]=temp;
    }
    printf("%s",str);
}