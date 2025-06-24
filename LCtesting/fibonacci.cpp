#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    int c = 0;
    cout << a << " " << b << " ";
    while(true){
        c = a + b;
        if(c > n) break;
        cout << c << " ";
        a = b;
        b = c;
    }
}