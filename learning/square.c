#include <stdio.h>

void square (int n) {
    n = n * n;
}

int _square(int *n) {
    *n = *n * *n;
    return *n;
}

int main() {
    int n = 4;
    square(n);
    printf("%d", n);
    printf("%d", _square(&n));
}