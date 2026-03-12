#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    int len = strlen(str);
    char temp[len];
    int index = 0;

    for (int i = 0; i < len; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < index; j++) {
            if (str[i] == temp[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            temp[index++] = str[i];
        }
    }
    temp[index] = '\0'; // Null-terminate

    strcpy(str, temp); // Copy back unique characters
}

int main() {
    char str[] = "programming";
    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;
}

#include <stdio.h>
int main() 
{
   char str[]="embedded";
   int i,j,k;
   for(i=0;str[i]!='\0';i++)
   {
       for(j=i+1;str[j]!='\0';j++)
       {
           if(str[i]==str[j])
           {
               for(k=j;str[k]!='\0';k++)
               {
                   str[k]=str[k+1];
               }
               j--;
           }
       }
   }
   printf("%s",str);
}
