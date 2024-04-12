#include<stdio.h>

int main() {
    int n;
    int count = 0;
    scanf("%d", &n);
    int arr[n];

    // Read marks into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Iterate over the array to delete marks below 35
    for (int i = 0; i < n; i++) {
        if (arr[i] <= 35) {
            // Shift elements to the left
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            count++;
            i--; // Decrement i to recheck the current index after shifting
            n--; // Decrease the size of the array
        }
    }

    // Check if all marks are below 35
    if (n == 0) {
        printf("All marks are below 35.\n");
    } else {
        printf("List of marks after deletion below 35: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
