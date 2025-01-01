#include <stdio.h>

int main() {
    int i, j, n, temp;
    int a[20];

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the numbers in unsorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble sort logic
    for (i = 0; i < n - 1; i++) { // Changed condition to 'n-1' for correct sorting
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("The sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
