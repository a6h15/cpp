#include <stdio.h>

int main(){
    
    int arr[5] = {3 ,4 ,5, 1, 2};
    int n = sizeof(arr)/sizeof(int);

    int prefixsum[5];
    prefixsum[0] = arr[0];

    for(int i=1;i<n;i++){
        prefixsum[i] = prefixsum[i-1] + arr[i];
    }

    for(int i=0;i<n;i++){
        printf("%d ", prefixsum[i]);
    }


}