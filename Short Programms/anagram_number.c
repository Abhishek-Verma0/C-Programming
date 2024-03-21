// // An anagram number is number whose all digit are present in other number which is made by jumbling all the digits of given number
// // we need to tell whether given integers are anagrams are not

#include <stdio.h>
int main() {
    int n, m;
    int isAnagram = 1; // Assume numbers are anagrams initially

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);

    // Count occurrences of each digit in n
    while (n > 0) {
        int digit = n % 10;
        int org = m;
        int boo = 0; // Flag to indicate if digit is found in m
        // Check if digit exists in m
        while (org > 0) {
            if (org % 10 == digit) {
                boo = 1;
                break;
            }
            org /= 10;
        }
        // If digit not found, break and set isAnagram to 0
        if (!boo) {
            isAnagram = 0;
            break;
        }

        n /= 10; // Move to next digit in n
    }
    // Check if both numbers are anagrams or not
    if (isAnagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
