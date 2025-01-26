#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];  
        printf("Input the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
        size_t len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0'; 
    }

        printf("Input the second string: ");
    fgets(str2, sizeof(str2), stdin);

    
    size_t len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
    }

    
    printf("String1: %s\n", str1);
    printf("String2: %s\n", str2);

    
    int result = strcmp(str1, str2);

    
    if (result == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}