#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  
    int length;     

        printf("Input the string: ");
    fgets(str, sizeof(str), stdin); // Use fgets to read a string with spaces

      size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0'; // Replace newline character with null terminator
    }

       length = strlen(str);
    printf("Length of the string is: %d\n", length);

    return 0;
}