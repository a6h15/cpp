#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100000];
    int freq[100000] = {0};

    int count = 0;
    int maxcount = 0;
    int maxval = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < 100000; i++) {
        if (freq[i] >= 2) {
            count++;
        }
        if (freq[i] > maxcount) {
            maxcount = freq[i];
            maxval = i;
        }
    }

    printf("number of duplicates %d\n", count);
    printf("most duplicate %d\n", maxcount);
    printf("most duplicated value %d\n", maxval);

    return 0;
}
