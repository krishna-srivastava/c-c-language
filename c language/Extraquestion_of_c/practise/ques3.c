//wap to check whether a number is armstrong number or not......
#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Calculate the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        n++;
    }

    originalNumber = number; // Reset originalNumber for the next loop

    // Calculate the sum of the digits raised to the power of n
    while (originalNumber != 0) {
        remainder = originalNumber % 10; // Get the last digit
        result += pow(remainder, n); // Raise to the power of n and add to result
        originalNumber /= 10; // Remove the last digit
    }

    // Check if the result is equal to the original number
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
