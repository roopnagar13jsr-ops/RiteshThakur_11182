#include <stdio.h>

int main() {
    int a[10], n, i, j, temp;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Bubble Sort
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Output sorted array
    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
