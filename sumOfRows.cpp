#include <iostream>
using namespace std;

void sum(int arr[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main() {
    const int row = 3, col = 3;
    int arr[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    // Display the array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"Sum is:"<<endl;
    sum(arr, row, col);
    
    return 0;
}
