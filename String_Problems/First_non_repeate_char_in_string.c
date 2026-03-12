#include <stdio.h>
char firstUnique(const char *s) 
{
    int i,j;
    for(i=0;s[i];i++) 
    {
        for(j=0;s[j]; j++) 
        {
            if (i != j && s[i] == s[j]) 
            break;
        }
        if (s[j] == '\0') 
        return s[i];  
    }
    return '\0';  // No unique character
}
int main() 
{
    const char *str = "levelup";
    char result = firstUnique(str);
    if (result)
        printf("First non-repeating character: %c\n", result);
    else
        printf("No non-repeating character found.\n");
}

#include <stdio.h>
char firstUnique(const char *s) 
{
    int i,j,c=0;
    for(i=0;s[i];i++) 
    {
        c=0;
        for(j=0;s[j];j++)
        {
            if(i!=j && s[i]==s[j])
            {
                c++;
                break;
            }
        }
        if(c==0)
        return s[i];
    }
    return '\0';  // No unique character
}
int main() 
{
    const char *str = "ulevelupv";
    char result = firstUnique(str);
    if (result)
        printf("First non-repeating character: %c\n", result);
    else
        printf("No non-repeating character found.\n");
}
