#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


size_t fibonacci(uint8_t index) {
    if (index < 2) {
        return index;
    }

    return fibonacci(index - 1) + fibonacci(index - 2);
}



int main(void) {
    uint8_t index;
    
    printf("Select the index of the Fibonacci sequence: ");
    scanf("%hhd", &index);

    printf("Fibonacci(%u) = %zu\n", index, fibonacci(index));

    return 0;
}