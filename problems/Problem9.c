#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[200];
    int length;

    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    // Remove newline character added by fgets
    str1[strcspn(str1, "\n")] = 0;

    // Input the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remove newline character added by fgets
    str2[strcspn(str2, "\n")] = 0;

    // 1. Calculate the length of the first string
    length = strlen(str1);
    printf("Length of the first string: %d\n", length);

    // 2. Copy the first string into another string
    strcpy(str3, str1);
    printf("Copy of the first string: %s\n", str3);

    // 3. Concatenate the first and second strings
    strcat(str3, str2);
    printf("Concatenation of the first and second strings: %s\n", str3);

    return 0;
}