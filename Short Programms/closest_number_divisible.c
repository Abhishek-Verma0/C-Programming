// we are having a user input a,b and we have to find a number such that it close to a and is divisble by b


// need to fix such that it works for negative terms also
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int close = 0;
int cls = 0;

int closestNumber(int a, int b);
int closestNumb(int a, int b);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    closestNumber(a, b);
    closestNumb(a, b);
    int diff1 = abs(a - close);
    int diff2 = abs(a - cls);
    if (diff1 > diff2 || (diff1 == diff2 && a < 0)) {
        printf("%d", cls);
    } else {
        printf("%d", close);
    }
    return 0;
}

int closestNumber(int a, int b) {
    if (a >= 0) {
        for (int i = a; i >= 0; i--) {
            if (i % b == 0) {
                close = i;
                break;
            }
        }
    } else {
        for (int i = a; i >= -1000; i--) { // Assuming -1000 is the minimum range for searching
            if (i % b == 0) {
                close = i;
                break;
            }
        }
    }
}

int closestNumb(int a, int b) {
    if (a >= 0) {
        for (int j = a; j <= 1000; j++) { // Assuming 1000 is the maximum range for searching
            if (j % b == 0) {
                cls = j;
                break;
            }
        }
    } else {
        for (int j = a; j <= 0; j++) {
            if (j % b == 0) {
                cls = j;
                break;
            }
        }
    }
}
