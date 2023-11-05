#include <stdio.h>

int main() {
    int number, i = 1;
    long factorial = 1;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    while (i <= number) {
        factorial *= i;
        i++;
    }

    printf("%d! = %ld\n", number, factorial);
    return 0;
}