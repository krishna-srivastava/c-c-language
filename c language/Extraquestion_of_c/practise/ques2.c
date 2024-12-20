#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder, originalNumber;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number; // Store the original number for comparison

    // Reverse the number
    while (number != 0) {
        remainder = number % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Append it to the reversed number
        number /= 10; // Remove the last digit
    }
    printf("The reverse of %d is %d.\n", originalNumber, reversedNumber);

    // Check if the original number is equal to the reversed number
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome number.\n", originalNumber);
    } else {
        printf("%d is not a palindrome number.\n", originalNumber);
    }

    return 0;
}
