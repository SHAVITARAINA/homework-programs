#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0; // Initialize sum to 0

    while (i <= 10) {
        sum += i; // Add the current number to the sum
        i++; // Increment the loop counter
    }

    printf("Sum of the first 10 consecutive numbers: %d\n", sum);
    return 0;
}