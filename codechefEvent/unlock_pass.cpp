#include<bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
int n,k;
	cin >> n >> k;
	vector<int> initial(n);
	for(int i=0;i<n;i++){  
	    cin >> initial[i];
	}
    
    vector<int> pass(n);
    for(int i=0;i<n;i++){
        cin >> pass[i];
    }
    int j=0;
    int i=0;
    int steps = 0;
    while(i<n && j<n){
        if(pass[i]==initial[j]){
            j++;
            i++;
        }
        else{
            while(pass[i]<initial[j]){
                initial[j] += 1;
                steps++;
                    if(pass[i]==initial[j]) break;
            }
            while(pass[i]>initial[j]){
                initial[j] -= 1;
            steps++;
            if(pass[i]==initial[j]) break;
            }
        }
        
        
    }
}
}

