#include <stdio.h>
#include <string.h>

void mergeStrings(char str1[], char str2[], char result[]) {
    int i = 0, j = 0, k = 0;
    while (str1[i] != '\0' && str2[j] != '\0') {
        result[k++] = str1[i++];
        result[k++] = str2[j++];
    }
    while (str1[i] != '\0') {
        result[k++] = str1[i++];
    }
    while (str2[j] != '\0') {
        result[k++] = str2[j++];
    }
    result[k] = '\0';
}

int main() {
    char str1[] = "abcde";
    char str2[] = "12345678";
    char result[100]; // Ensure the size is large enough to hold the merged string

    mergeStrings(str1, str2, result);

    printf("Merged String: %s\n", result);
    return 0;
}
