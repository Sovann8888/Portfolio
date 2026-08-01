#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 1. Reserve memory space for 2 integers
    int *numbers = malloc(2 * sizeof(int));

    // 2. Store values in the two memory slots
    numbers[0] = 10;
    numbers[1] = 20;

    // 3. Print both stored numbers
    printf("First: %d, Second: %d\n", numbers[0], numbers[1]);

    // 4. Return the memory space to the system
    free(numbers);

    return 0;
}