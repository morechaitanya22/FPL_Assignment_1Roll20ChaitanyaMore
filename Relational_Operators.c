#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    
    printf("a = %d, b = %d\n", a, b);

    // Equal to
    printf("a == b: %d\n", a == b);

    // Not equal to
    printf("a != b: %d\n", a != b);

    // Greater than
    printf("a > b: %d\n", a > b);

    // Less than
    printf("a < b: %d\n", a < b);

    // Greater than or equal to
    printf("a >= b: %d\n", a >= b);

    // Less than or equal to
    printf("a <= b: %d\n", a <= b);

    // Results will be displayed as 0 or 1, 0 for false and 1 for true

    return 0;
}