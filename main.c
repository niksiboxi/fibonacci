#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint8_t fibonacci_array[10];

int main(void) {
    fibonacci_array[0] = 0;
    fibonacci_array[1] = 1;

    for (int i = 2; i < 10; i++) {
        fibonacci_array[i] = fibonacci_array[i - 1] + fibonacci_array[i - 2];
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", fibonacci_array[i]);
    }

    return 0;
}