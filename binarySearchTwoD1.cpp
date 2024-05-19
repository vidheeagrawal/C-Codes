#include<bits/stdc++.h>
using namespace std;

bool search(int arr[][4], int row, int col, int key, int &rowIndex, int &colIndex) {
    int start = 0;
    int end = row * col - 1;
    
    while(start <= end) {
        int mid = start + (end - start) / 2;
        int element = arr[mid / col][mid % col];
        
        if(element == key) {
            rowIndex = mid / col;
            colIndex = mid % col;
            return true;
        }
        
        if(element < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    rowIndex = -1;
    colIndex = -1;
    return false;
}

int main() {
    int arr[3][4] = {{1, 2, 3, 11}, {4, 5, 6, 12}, {7, 8, 9, 13}};
    int row = 3;
    int col = 4;
    int key;
    int rowIndex, colIndex;

    cout << "Enter element to search: ";
    cin >> key;

    bool found = search(arr, row, col, key, rowIndex, colIndex);
    
    if(found) {
        cout << "Found at Index (" << rowIndex << ", " << colIndex << ")" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}
