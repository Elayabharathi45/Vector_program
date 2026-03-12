#include<stdio.h>
#include<string.h>
int main()
{
	
	char s1[]="embedded",s2[]="bed";
	int i,j;
	for(i=0;s1[i];i++)
	{
	    if(s1[i]==s2[0])
	    {
	        for(j=1;s2[j];j++)
	        {
	            if(s2[j]!=s1[i+j])
	            break;
	        }
	        if(s2[j]=='\0')
	        {
	            printf("%s",s1+i);
	            return 0;
	        }
	    }
	}
    printf("sub-string not present\n");
}

#include<stdio.h>
#include<string.h>
int main()
{
	
	char s1[]="embedded",s2[]="bed";
	int i,j,len=strlen(s2);
	for(i=0;s1[i];i++)
	{
	    if(s1[i]==s2[0])
	    {
	        if(strncmp(s1,s2,len))
	        {
	            printf("%s",s1+i);
	            return 0;
	        }
	    }
	}
    printf("sub-string not present\n");
}