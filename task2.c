#include <stdio.h>
int main() {
    int matrix[3][3] = {{12,34,56}, {72,4,6}, {90,67,12}};
    int highest = matrix[0][0];
    int row = 0, col = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > highest) {
                highest = matrix[i][j];
                row = i;
                col = j;
                
            }
        }
    }

    printf("\n %d at position (%d, %d)\n", highest, row, col);
    return 0;
}
