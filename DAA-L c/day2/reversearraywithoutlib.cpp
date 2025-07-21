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

    int j = n-1;
    int i = 0;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    cout << "reversed array" << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}