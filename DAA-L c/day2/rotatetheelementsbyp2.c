#include <stdio.h>

void ROTATE_RIGHT(int arr[], int n, int k) {
    int rotated[100000];
    int j = 0;

    // Ensure k is within bounds
    k = k % n;

    // Copy last k elements to the beginning
    for (int i = n - k; i < n; i++) {
        rotated[j++] = arr[i];
    }

    // Copy the first n-k elements
    for (int i = 0; i < n - k; i++) {
        rotated[j++] = arr[i];
    }

    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = rotated[i];
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[1000000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ROTATE_RIGHT(arr, n, 5);

    printf("rotated array\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
