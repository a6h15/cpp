#include <stdio.h>
MAX= 100000;

// Using extra array
void shiftZeroesExtra(int arr[], int n, int result[]) {
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            result[index++] = arr[i];
        }
    }
    while (index < n) {
        result[index++] = 0;
    }
}

// In-place (without extra array)
void shiftZeroesInPlace(int arr[], int n) {
    int index = 0; // next position for non-zero
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }
    while (index < n) {
        arr[index++] = 0;
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[MAX], result[MAX];
    printf("Enter %d elements (include some zeroes):\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Original array:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    // Extra array method
    shiftZeroesExtra(arr, n, result);
    printf("Array after shifting zeroes to the end (using extra array):\n");
    for (int i = 0; i < n; i++) printf("%d ", result[i]);
    printf("\n");

    // In-place method
    shiftZeroesInPlace(arr, n);
    printf("Array after shifting zeroes to the end (in-place):\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}


