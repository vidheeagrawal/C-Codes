#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int key, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    const int row = 3, col = 3;
    int arr[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int key;

    cout << "Enter the search element: ";
    cin >> key;

    if (isPresent(arr, key, row, col)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
    
    return 0;
}
