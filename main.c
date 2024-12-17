#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    uint8_t x = 0x00;
    uint8_t y = 0x01;
    uint8_t i = 0;

    while (i < 10)
    {
        printf("%d\n", x);

        uint8_t temp = x + y;
        x = y;
        y = temp;
        i++;
    }

    return 0;
}