#include <stdio.h>

int main() {
    int number, i;
    int isPrime = 1; // Assume the number is prime

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0; // 0 and 1 are not prime numbers
    } else {
        for (i = 0; i<number; i++) {
            if (number % i == 0) {
                isPrime = 0; // Not a prime number
                break; // No need to check further
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
