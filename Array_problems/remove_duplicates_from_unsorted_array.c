#include <stdio.h>
void removeDuplicates(int arr[], int *size) {
    int temp[*size];
    int j = 0;
    for (int i = 0; i < *size; i++) {
        int isDuplicate = 0;
        for (int k = 0; k < j; k++) {
            if (arr[i] == arr[k]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            arr[j++] = arr[i];
        }
    }
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }
    *size = j;
}
int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates(arr, &size);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

#include <stdio.h>
int main() 
{
   int str[]={2,2,3,4,1,2,5,1,6,5,2,5};
   int n=sizeof(str)/sizeof(str[0]);
   int i,j,k;
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;)
       {
           if(str[i]==str[j])
           {
               for(k=j;k<n-1;k++)
               {
                   str[k]=str[k+1];
               }
               n--;
           }
           else
           j++;
       }
   }
   for(i=0;i<n;i++)
   printf("%d ",str[i]);
}
