#include<bits/stdc++.h>
#define fastio() ios::sync_with_stdio(false); cin.tie(0);
using namespace std;


void printRowWise(const vector<vector<int>>& arr, int rows, int cols) {
    cout << "Row-wise printing:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printColumnWise(const vector<vector<int>>& arr, int rows, int cols) {
    cout << "Column-wise printing:" << endl;
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols));
    cout << "Enter the elements row-wise:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    printRowWise(arr, rows, cols);
    cout << endl;
    printColumnWise(arr, rows, cols);

    return 0;
}
