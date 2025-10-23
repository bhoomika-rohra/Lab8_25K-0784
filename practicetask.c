#include <stdio.h>

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2];

    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 2; col++) {
            sum[row][col] = a[row][col] + b[row][col];
        }
    }

    printf("Sum of the two 2x2 matrices:\n");
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 2; col++) {
            printf("%d ", sum[row][col]);
        }
        printf("\n");
    }

    return 0;
}
