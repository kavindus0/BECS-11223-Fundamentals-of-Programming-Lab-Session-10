/****************************************
Program: Random Array Filler and Display
Author: [Your Name]
Date: [Current Date]
Purpose: Fill an array with random numbers and display them
*****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int ar[], int size);
void display_array(int ar[], int size);

int main() {
    int values[10];
    
        fill_array(values, 10);
    
    
    display_array(values, 10);
    
    return 0;
}

/********************
Pre-Condition: int array and size of the array
Post-Condition: None
Purpose: Fill the array with random numbers
*******************/
void fill_array(int ar[], int size) {
        srand(time(NULL));
    for (int i = 0; i < size; i++) {
        ar[i] = rand() % 1000; // Generate random number between 0 and 999
    }
}

/********************
Pre-Condition: int array and size of the array
Post-Condition: None
Purpose: Display the array values
*******************/
void display_array(int ar[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", ar[i]);    }
    printf("\n");
}
