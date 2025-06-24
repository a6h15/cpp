#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }
        
        unordered_map<int, int> required = {{0, 3}, {1, 1}, {2, 2}, {3, 1}, {5, 1}};
        int count = 0;
        
        unordered_map<int, int> drawn;
        for(int i=0;i<n;i++){
            int num = nums[i];
            if(required.find(num)!=required.end()){
                drawn[num]++;
            }
        
        bool alldone = true;
        for (const auto& mpp : required) {
            int number = mpp.first;
            int count = mpp.second;
            if (drawn[number] < count) {
                alldone= false;
                break;
            }
        }

        if(alldone){
            count = i+1;
            break;
        }
    }

    if(count>0) cout << count << endl;
    else cout << 0 << endl;

        

    }
}