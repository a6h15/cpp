#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    int sumEvenIndex=0;
    int sumOddIndex=0;
    vector<int> arr(n,0);
    for(int i = 0;i<n;i++){
        if(i%2==0) sumEvenIndex += arr[i];
        else sumOddIndex += arr[i];
    }
    int result = sumEvenIndex - sumOddIndex;
    cout << result;
}