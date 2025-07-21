#include <bits/stdc++.h>
#define fastio() ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() {
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> prefixsumarr(n);
    prefixsumarr[0] = arr[0];

    for(int i = 1; i < n; i++) {
        prefixsumarr[i] = prefixsumarr[i - 1] + arr[i];
    }

    for(int i = 0; i < n; i++) {
        cout << prefixsumarr[i] << " ";
    }

    return 0;
}
