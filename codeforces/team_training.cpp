#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int> vals(n);
        for(int i=0;i<n;i++){
            cin >> vals[i];
        }
        vector<int> team;
        int el = *min_element(vals.begin(), vals.end());
        int teams = 0;
        for(int i=0;i<n;i++){
            int num = vals[i];
            if((num*el) >= x){
                teams += 1;
            }
        }
    }
}