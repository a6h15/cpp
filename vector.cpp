#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    // Correct for-each loop
    for (auto it : vec) {
        cout << it << " ";
    }

    return 0; 
}