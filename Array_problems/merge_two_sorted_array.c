#include <stdio.h>
#include <string.h>

void merge(int str1[], int str2[], int n, int m, int result[]) {
    int i = 0, j = 0, k = 0;
    while ((i<n) && (j<m)) 
    {
        if(str1[i]<str2[j])
        result[k++]=str1[i++];
        else
        result[k++]=str2[j++];
    }
    while (i<n) 
    result[k++] = str1[i++];
    while (j<m) 
    result[k++] = str2[j++];
   
    //result[k] = '\0';
}

int main() {
    int str1[] = {1,3,5,7,9},str2[] = {2,4};
    int n1=sizeof(str1)/sizeof(str1[0]);
    int n2=sizeof(str2)/sizeof(str2[0]);
    int result[n1+n2]; // Ensure the size is large enough to hold the merged string
    merge(str1,str2,n1,n2,result);
    int i;
    for(i=0;i<(n1+n2);i++)
    printf("%d ", result[i]);
}
