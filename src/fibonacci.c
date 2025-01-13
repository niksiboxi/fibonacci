#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdlib.h>

#include "fibonacci.h"

/**
 * @brief Computes the Fibonacci number at a given index using memoization.
 *
 * This function uses memoization to efficiently compute the Fibonacci number
 * at the specified index. It stores previously computed Fibonacci numbers in
 * the provided memo array to avoid redundant calculations.
 *
 * @param index The index of the Fibonacci number to compute.
 * @param memo An array used to store previously computed Fibonacci numbers.
 *             The array should be initialized with all elements set to (size_t)-1.
 * @return The Fibonacci number at the specified index.
 */
size_t fibonacci_memo(uint8_t index, size_t *memo) {
    if (memo[index] != (size_t)-1) {
        return memo[index];
    }

    if (index < 2) {
        memo[index] = index;
    } else {
        memo[index] = fibonacci_memo(index - 1, memo) + fibonacci_memo(index - 2, memo);
    }

    return memo[index];
}

/**
 * @brief Computes the Fibonacci number at the given index using memoization.
 *
 * This function allocates memory to store intermediate Fibonacci values
 * and uses a helper function `fibonacci_memo` to compute the result.
 *
 * @param index The index of the Fibonacci sequence to compute.
 * @return The Fibonacci number at the given index.
 */
size_t fibonacci(uint8_t index) {
    size_t *memo = malloc((index + 1) * sizeof(size_t));
    for (uint8_t i = 0; i <= index; i++) {
        memo[i] = (size_t)-1;
    }

    size_t result = fibonacci_memo(index, memo);
    free(memo);
    return result;
}


