#include <stdio.h>

int main() {
    int a[10][10];
    int i, j, r, c;

    // Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input 2D array elements
    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Display 2D array
    printf("Matrix elements are:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
