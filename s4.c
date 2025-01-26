#include <stdio.h>

void doubled(int *a, int *b, int *c) {
    
    *a *= 2;

    *b *= 2;

    *c *= 2;
}

int main() {
    int x = 1, y = 2, z = 3;

    printf("Before doubling: x = %d, y = %d, z = %d\n", x, y, z);

       doubled(&x, &y, &z);

    printf("After doubling: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}