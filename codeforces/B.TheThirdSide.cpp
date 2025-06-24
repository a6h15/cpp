#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        priority_queue<int> heap(a.begin(), a.end());

        while (heap.size() > 1) {
            int a = heap.top();
            heap.pop();
            int b = heap.top();
            heap.pop();
            int new_a = a + b - 1;
            heap.push(new_a);
        }

        cout << heap.top() << '\n';
    }

    return 0;
}