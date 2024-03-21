// here we are converting a decimal number to octal number system 
#include <stdio.h>

int main() {
    int decimalNumber, remainder, octalNumber = 0, place = 1;

    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Convert decimal to octal
    while (decimalNumber != 0) {
        remainder = decimalNumber % 8;
        octalNumber += remainder * place;
        decimalNumber /= 8;
        place *= 10;
    }

    // Display the octal equivalent
    printf("Octal equivalent: %d\n", octalNumber);

    return 0;
}
