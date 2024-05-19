#include<bits/stdc++.h>
using namespace std;

void spiralPrinting(int arr[][3], int n, int m) {
    int cnt = 0;
    int total = n * m;
    int startingRow = 0, startingCol = 0;
    int endingRow = n - 1, endingCol = m - 1;

    while(cnt < total) {
        // Print starting row
        for(int i = startingCol; i <= endingCol && cnt < total; i++) {
            cout << arr[startingRow][i] << " ";
            cnt++;
        }
        startingRow++;

        // Print ending column
        for(int i = startingRow; i <= endingRow && cnt < total; i++) {
            cout << arr[i][endingCol] << " ";
            cnt++;
        }
        endingCol--;

        // Print ending row
        for(int i = endingCol; i >= startingCol && cnt < total; i--) {
            cout << arr[endingRow][i] << " ";
            cnt++;
        }
        endingRow--;

        // Print starting column
        for(int i = endingRow; i >= startingRow && cnt < total; i--) {
            cout << arr[i][startingCol] << " ";
            cnt++;
        }
        startingCol++;
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;
    int m = 3;

    cout << "Original Array: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Spiral Printing: " << endl;
    spiralPrinting(arr, n, m);

    return 0;
}
