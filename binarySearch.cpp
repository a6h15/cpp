#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &arr,int n, int key){
    int start = 0;
    int end = n-1;
    int mid;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
    
}

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());
    int result = BinarySearch(vec,n,12);
    cout << result << endl;
} 