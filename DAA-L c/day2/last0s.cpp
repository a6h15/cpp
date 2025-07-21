#include <iostream>
#include <vector>
using namespace std;


void shiftusingextraspace(const vector<int>& arr, vector<int>& result) {
    int index = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            result[index] = arr[i];
            index++;
        }
    }
    while (index < arr.size()) {
        result[index] = 0;
        index++;
    }
}

// In-place (without extra space)
void shiftinplace(vector<int>& arr) {
    int index = 0; // position for next non-zero
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }
    while (index < arr.size()) {
        arr[index++] = 0;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Original array:" << endl;
    for (int val : arr) cout << val << " ";
    cout << endl;

    vector<int> result(n);
    shiftusingextraspace(arr, result);
    cout << endl;
    for (int val : result) cout << val << " ";
    cout << endl;

    // In-place method
    shiftinplace(arr);
    cout << endl;
    for (int val : arr) cout << val << " ";
    cout << endl;

    return 0;
}
