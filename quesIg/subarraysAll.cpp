#include<bits/stdc++.h>
#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define int long long
using namespace std;


void print_all_subarrays(vector<int> &arr){
    int m = arr.size();
    for(int i = 0;i < m;i++){
        for(int j = i;j < m;j++){
            cout << "[ ";
            for(int k = i;k<=j;k++){
                cout << arr[k] << " ";
            }
            cout << "]\n";
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

print_all_subarrays(a);

}