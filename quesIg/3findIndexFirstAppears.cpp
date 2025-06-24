#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);  //always initiate the vector or it gives runtime error
    for(int i=0;i<n;i++){
        cin >> vec[i];
    }

    sort(vec.begin(),vec.end());

    //for getting the first instance of an element
    int x;
    cin >> x;

    int ind = lower_bound(vec.begin(),vec.end(),x) - vec.begin();
    if(ind != n && vec[ind]==x){
        cout << "element found at " << ind << endl;
    }
    else{
        cout << "element was not found" << endl;
    }

    return 0;
}