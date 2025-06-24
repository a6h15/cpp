#include<bits/stdc++.h>
using namespace std;

int main(){
    int res = 0;
    int num;
    cin >> num;
    int ognum = num;
    while(num>0){
        int dig = num % 10;
        res = res + (dig*dig*dig);
        num = num / 10;
    }
    if(res == ognum){
        cout << "armstrong num" << endl;
    }
    else{
        cout << "not an armstrong" << endl;
    }
}