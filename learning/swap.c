// swap two number
#include <stdio.h>

void swap(int x, int y);
void _swap(int *x, int *y);

int main() {
    int x = 15;
    int y = 10;
    
    printf("Initial values in main: x = %d, y = %d\n\n", x, y);

    printf("--- Demonstrating Call by Value ---\n");
    swap(x, y);
    printf("After swap(x, y) in main: x = %d and y = %d\n\n", x, y);
    
    printf("--- Demonstrating Call by Reference ---\n");
    _swap(&x, &y);
    printf("After _swap(&x, &y) in main: x = %d and y = %d\n", x, y);

    return 0;
}

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside swap (local change): x = %d and y = %d\n", x, y);
}

void _swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("Inside _swap (original changed): x = %d and y = %d\n", *x, *y);
}