#include<stdio.h>
#include<string.h>
int main()
{
	
	char s[]="hi hello how are you";
	int i,j,k,len=strlen(s);
	int a,b;
	for(i=0,j=len-1;i<j;i++,j--)
	{
	    char tp=s[i];
	    s[i]=s[j];
	    s[j]=tp;
	}
	for(i=0,a=0;s[i]>=0;i++)
	{
	    if((s[i]==' ')||(s[i]=='\0'))
	    {
	        b=i-1;
	        for(k=a,j=b;k<j;k++,j--)
	        {
	            char temp;
	            temp=s[k];
	            s[k]=s[j];
	            s[j]=temp;
	        }
	        a=i+1;
	    }
	}
	
	printf("%s",s);
}