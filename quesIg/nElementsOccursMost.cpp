#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> mpp;
    int max = 0;
    for(int i=1; i<=n;i++){
        int x;
        cin >> x;
        mpp[x]++; //creates a key of x and sets the value +1 , initially it is {0,0} 
        if(mpp[x]>mpp[max]){
            max = x;
        }
    }
    cout << max << endl;
}