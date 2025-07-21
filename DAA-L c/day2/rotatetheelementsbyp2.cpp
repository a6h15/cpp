#include <bits/stdc++.h>
#define fastio() ios::sync_with_stdio(false); cin.tie(0);
using namespace std;


void ROTATE_RIGHT(vector<int>& nums, int k) {
        int n = nums.size();
        int j = 0;
        k = k % n;
        vector<int> ans(n);
        //copying the k elements from back to ans.
        for (int i = n - k; i < n; i++) {
            ans[j] = nums[i];
            j++;
        }
        //copying the first n-k elements from front to ans.
        for (int i = 0; i < n - k; i++) {
            ans[j] = nums[i];
            j++;
        }
        //moving the ans to original array.
        for (int i = 0; i < n; i++) {
            nums[i] = ans[i];
        }
    }

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    ROTATE_RIGHT(arr,5);
    cout << "rotated array" << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}