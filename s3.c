#include <stdio.h>

void addNumbers(int *num1, int *num2, int *result) {
    *result = *num1 + *num2; // Dereference pointers and perform addition
}

int main() {
    int a, b, sum;
    
        printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    
    addNumbers(&a, &b, &sum);
    
    printf("The sum of %d and %d is %d\n", a, b, sum);
    
    return 0;
}