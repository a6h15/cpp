#include<bits/stdc++.h>
using namespace std;

int main() {
	
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int length = 0;
    int maxlength =0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            length++;
            maxlength = max(maxlength,length);
        }
        else{
            length = 0;
        }
    }
    cout << maxlength;
    
}
    