#include <stdio.h>

#define MAX 100000

int main() {
    int n;
    scanf("%d", &n);

    int arr[MAX];
    int freq[MAX] = {0}; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < MAX; i++) {
        if (freq[i] > 0) {
            printf("%d occurs %d times\n", i, freq[i]);
        }
    }

    return 0;
}
