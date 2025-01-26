#include <stdio.h>

#define MAX_LENGTH 100  
int main() {
    char str[MAX_LENGTH];  

    
    printf("Input the string: ");
    
        fgets(str, sizeof(str), stdin);

        printf("The string you entered is: %s", str);

    return 0;
}