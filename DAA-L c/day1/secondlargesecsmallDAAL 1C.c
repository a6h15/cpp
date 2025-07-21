#include <stdio.h>
#include <limits.h>

int secondLargest(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        return -1;
    }

    return second;
}

int secondSmallest(int arr[], int n) {
    int first = INT_MAX, second = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MAX) {
        return -1;
    }

    return second;
}

int main() {
    int arr[5] = {3, 4 ,12 ,66, 2};
    int n = sizeof(arr)/sizeof(int);
    // int arr[n];
    
    // printf("Enter size of array: ");
    // scanf("%d", &n);       
    // printf("Enter %d elements:\n", n);
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &arr[i]);
    // }

    int seclarge = secondLargest(arr, n);
    int secsmall = secondSmallest(arr, n);

    if (seclarge != -1)
        printf("Second largest = %d\n", seclarge);
    else
        printf("No second largest element found.\n");

    if (secsmall != -1)
        printf("Second smallest = %d\n", secsmall);
    else
        printf("No second smallest element found.\n");

    return 0;
}
