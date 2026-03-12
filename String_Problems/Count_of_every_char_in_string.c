#include<stdio.h>
#include<string.h>
int main()
{
	char ch,s[]="embedded";
	int i;
	char hash[256]={0};
	for(i=0;s[i];i++)
	{
	    hash[s[i]]++;
	}
	for(i=0;s[i];i++)
	{
	    if(hash[s[i]]>0)
	    {
	    printf("%c-->%d\n",s[i],hash[s[i]]);
	    hash[s[i]] = 0;
	    }
	}
}

#include<stdio.h>
#include<string.h>
int main()
{
	char ch,s[]="embedded";
	int i,j,len=strlen(s),c;
	char visit[10];
	for(i=0;s[i];i++)
	{
	    if(visit[i]==1)
	    continue;
	    c=1;
	    for(j=i+1;s[j];j++)
	    {
	        if(s[i]==s[j])
	        {
	            c++;
	            visit[j]=1;
	        }
	    }
	    printf("%c-->%d\n",s[i],c);
	}
    
}