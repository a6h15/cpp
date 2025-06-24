#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int w;
    while(t--){
        cin >> w;
        if(w % 2 == 0 && w != 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}