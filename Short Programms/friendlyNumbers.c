//  a freindly pair of number is that whose divior sum is equal to its number 

#include<stdio.h>

int divisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int friends(int a, int b) {
    return divisors(a) / a==1 && divisors(b)/b == 1;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (friends(num1, num2)) {
        printf("(%d, %d) are friendly pairs\n", num1, num2);
    } else {
        printf("(%d, %d) are not friendly pairs\n", num1, num2);
    }

    return 0;
}
