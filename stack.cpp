#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(6);
    st.push(4);
    st.push(5);

    cout << st.top() << endl; //shows 5
    st.pop(); //deletes 5

    cout << st.top() << endl; // shows 4    
}