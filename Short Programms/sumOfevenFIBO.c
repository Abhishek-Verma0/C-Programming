// printing sum of even fibonacci  numbers form 0 to n

#include <stdio.h>

// Function to find the sum of even Fibonacci numbers up to n
long long sumEvenFibonacci(int n) {
    long long a = 0, b = 1, sum = 0;

    while (b <= n) {
        if (b % 2 == 0) {
            sum += b;
        }
        long long next = a + b;
        a = b;
        b = next;
    }

    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    // Calculate and print the sum of even Fibonacci numbers up to n
    printf("Sum of even Fibonacci numbers up to %d is: %lld\n", n, sumEvenFibonacci(n));

    return 0;
}
