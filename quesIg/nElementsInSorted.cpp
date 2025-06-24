#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    multiset<int> muset;
    for(int i=0; i<n;i++){
        int x;
        cin >> x;
        muset.emplace(x);
    }
    
    for(auto it : muset){
        cout << it << endl;
    }
}