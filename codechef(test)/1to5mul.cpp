#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	map<int , int> mpp;
	for(int i=0;i<=5;i++){
	    mpp[i] = i*i;
	}
	for(auto it: mpp){
	    cout << it.first << " - " << it.second << endl;
	}

}
