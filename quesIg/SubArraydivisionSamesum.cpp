#include<bits/stdc++.h>
#define fastio() ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

bool division_of_array(vector<int> & arr){
    int n ,sum;
    n = arr.size();
    sum = INT_MIN;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    int prefix = 0,ans;
    for(int i=0;i<n-1;i++){
        prefix += arr[i];
        ans = sum - prefix;
        if(ans==prefix) return true;
    }
    return false;  
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    cout << division_of_array(a);

    return 0;
}
