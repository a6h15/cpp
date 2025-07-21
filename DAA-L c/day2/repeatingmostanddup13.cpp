#include <bits/stdc++.h>
#define fastio() ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    int count = 0;
    int maxcount = 0;
    int maxval = 0;
    unordered_map<int, int> hash;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    unordered_map<int,int>::iterator it;
    for(it=hash.begin();it!=hash.end();it++){
        int val = it->first;
        int am = it->second;
        
        if(am >= 2)
        count++;
        
        if(am > maxcount){
            maxcount = am;
            maxval = it->first;
        }
    }
    cout << "number of duplicates " << count << endl;
    cout << "most duplicate " << maxcount << endl;
    cout << "most duplicated value " << maxval << endl;
    
}