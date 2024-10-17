#include <stdio.h>

int main() {
    int arr3D[2][2][3]; 
    int totalSum = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                arr3D[i][j][k] = (i + 1) * (j + 2) * (k + 1);  
                totalSum += arr3D[i][j][k];
            }
        }
    }

    
    printf("3D Array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%d ", arr3D[i][j][k]);
            }
            printf("\n");
        }
    }

    printf("\nTotal Sum of All Elements: %d\n", totalSum);

    return 0;
}