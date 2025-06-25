#include<bits/stdc++.h>

using namespace std;

void doSomething(int &num){
    cout << num << endl;
    num += 5;
    cout << num << endl;

}

int main(){
    cout << "hey abhishek" << endl;
    cout << "hey abhishek" << "\n" ;
    

    int x;
    cin >> x;
    cout << "the value of x :" << x << endl;
    if(x > 18){
        cout << "you are an adult" << endl;
    }
    else{
        cout << "you are not an adult" << endl;
    }

    cin.ignore();

    string c;
    getline(cin ,c);
    cout << c << endl;

    int a = 10;
    doSomething(a);

    cout << a << endl;
}