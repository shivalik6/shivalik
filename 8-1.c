#include <stdio.h>
#include <string.h>

int main() {
   
    char str1[] = "Hello";
    char str2[] = " World!";
    char concat[50]; 

    printf("1. String Length:\n");
    printf("Length of str1: %zu\n", strlen(str1));
    printf("Length of str2: %zu\n", strlen(str2));

    
    printf("\n2. String Copy:\n");
    char copy[20];
    strcpy(copy, str1);
    printf("Copy of str1: %s\n", copy);

    
    printf("\n3. String Concatenation:\n");
    strcpy(concat, str1);
    strcat(concat, str2);
    printf("Concatenated string: %s\n", concat);

    
    printf("\n4. String Comparison:\n");
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are not equal.\n");
    }

   
    printf("\n5. Substring Search:\n");
    char substring[] = "lo";
    if (strstr(str1, substring) != NULL) {
        printf("'%s' found in '%s'.\n", substring, str1);
    } else {
        printf("'%s' not found in '%s'.\n", substring, str1);
    }

    return 0;
}