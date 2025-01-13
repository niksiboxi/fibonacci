#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "fibonacci.h"

int main(void) {
    uint8_t index;

    printf("Select the index of the Fibonacci sequence: ");
    scanf("%hhd", &index);

    printf("Fibonacci at index %u = %zu\n", index, fibonacci(index));

    return 0;
}