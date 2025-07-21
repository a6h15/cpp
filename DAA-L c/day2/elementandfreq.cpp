#include <bits/stdc++.h>
#define fastio() ios::sync_with_stdio(false); cin.tie(0);
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];    
    }

    unordered_map<int,int> hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    unordered_map<int,int>::iterator it;
    for(it = hash.begin();it!=hash.end();it++){
        int val = it->first;
        int count = it->second;

        cout << val << " occurs " << count << " times " << endl;
    }
}