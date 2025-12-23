// pass by reference using pointers
#include <stdio.h>

void changeValue(int *p) {
    *p = 10;
}

int main() {
    int a = 100;
    int *x = &a;
    changeValue(x);
    printf("%d skip \n", a);
    return 0;
}

// # include <stdio.h>

// void changeValue(int x) {
//     x = 5;
// }

// // C is pass by value just like java
// int main() {
//     int x = 10;
//     changeValue(x);
//     printf("%d\n", x);
//     return 0;
// }
