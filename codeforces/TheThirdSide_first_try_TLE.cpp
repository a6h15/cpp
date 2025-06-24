
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> sides(n);
        for (int i = 0; i < n; i++) {
            cin >> sides[i];
        }
        while (sides.size() > 1) {
            int x = sides[0] + sides[1] - 1;
            sides.erase(sides.begin(), sides.begin() + 2);
            sides.emplace_back(x);
        }
        cout << sides[0] << endl;
    }
}