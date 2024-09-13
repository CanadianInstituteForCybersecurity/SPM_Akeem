#include <stdio.h>

// Function to calculate the factorial of a number using long long int
long long int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    
    // Ask the user for a number
    printf("Enter a number to calculate its factorial (max 20): ");
    scanf("%d", &num);

    // Check if the input is within a valid range
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (num > 20) {
        printf("Sorry, the number is too large to compute the factorial.\n");
    } else {
        // Calculate and display the factorial
        printf("The factorial of %d is %lld\n", num, factorial(num));
    }
    
    return 0;
}

