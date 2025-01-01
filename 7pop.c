#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main() {
    int x, n, i;
    float rad, sum = 0.0; // Initialize sum to 0.0
    printf("Enter degree\n");
    scanf("%d", &x);
    printf("Enter number of terms\n");
    scanf("%d", &n);

    rad = x * M_PI / 180.0; // Use M_PI for better precision

    for(i = 1; i <= n; i += 2) {
        if ((i - 1) % 4 == 0)
            sum = sum + pow(rad, i) / fact(i);
        else
            sum = sum - pow(rad, i) / fact(i);
    }

    printf("Calculated sin(%d) = %f\n", x, sum);
    printf("Library sin(%d) = %f\n", x, sin(rad));
}

int fact(int m) {
    int i, f = 1;
    for (i = 1; i <= m; i++) {
        f = f * i;
    }
    return f; // Fix return value to f
}
