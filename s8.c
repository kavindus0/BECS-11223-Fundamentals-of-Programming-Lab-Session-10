#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000  
int main() {
    char str1[MAX_LENGTH];
    char str2[MAX_LENGTH];
    char result[MAX_LENGTH * 2]; 
    
    printf("Input the first string: ");
    fgets(str1, sizeof(str1), stdin);
        str1[strcspn(str1, "\n")] = '\0';

        printf("Input the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    str2[strcspn(str2, "\n")] = '\0';

        strcpy(result, str1);

        strcat(result, str2);

        printf("After concatenation the string is:\n%s\n", result);

    return 0;
}