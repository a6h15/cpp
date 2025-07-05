#include<bits/stdc++.h>
#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define int long long
using namespace std;

// Brute Force Approach - O(n²)
int longestSubarrayBrute(vector<int>& nums, int k) {
    int n = nums.size();
    int maxLen = 0;

    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += nums[j];
            if(sum == k) {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }
    return maxLen;
}

//Better Approach with Hash Map - O(n)
int longestSubarrayBetter(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSumIndex;
    int sum = 0, maxLen = 0;

    for(int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if(sum == k)
            maxLen = i + 1;

        if(prefixSumIndex.find(sum - k) != prefixSumIndex.end()) {
            maxLen = max(maxLen, i - prefixSumIndex[sum - k]);
        }

        // Only store the first occurrence of sum
        if(prefixSumIndex.find(sum) == prefixSumIndex.end()) {
            prefixSumIndex[sum] = i;
        }
    }

    return maxLen;
}

//Optimal approach
int longestsubarrayoptimal(vector<int> &nums, int k){
    int left = 0, right = 0, sum = 0, maxLen = 0;
    int n = nums.size();

    while(right < n) {
        sum += nums[right];

        // shrink window if sum > k
        while(sum > k && left <= right) {
            sum -= nums[left];
            left++;
        }

        // check if sum equals k
        if(sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
    }

    return maxLen;
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        cout << "Brute: " << longestSubarrayBrute(arr, k) << endl;
        cout << "Better: " << longestSubarrayBetter(arr, k) << endl;
        cout << "Optimal: " << longestsubarrayoptimal(arr, k) << endl;
    }
}