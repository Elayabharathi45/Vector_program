#include<stdio.h>
#include<string.h>
int main()
{
	char ch,s[]="embedded domaind";
	int i,j,len=strlen(s),c,max=0;
	for(i=0;s[i]!='\0';i++)
	{
	    c=1;
	    for(j=i+1;s[j]!='\0';j++)
	    {
	        if(s[i]==s[j])
	            c++;
	    }
	    if(c>max)
        {
	        max=c;
	        ch=s[i];
	    }
	}
    printf("%c %d",ch,max);
    
}