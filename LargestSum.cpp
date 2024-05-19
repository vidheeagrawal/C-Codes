//Here we will find largest sum of rows.

#include<bits/stdc++.h>
using namespace std;

int sum(int arr[][3]){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int i = 0 ; i < 3 ; i++){
        int rowSum = 0;
        for(int j = 0 ; j < 3 ; j++){
            rowSum += arr[i][j];
        }
        if(rowSum > maxi){
            maxi = rowSum;
            rowIndex = i;
        }
    }

    cout<<"Maximum Sum: "<<maxi<<endl;
    return rowIndex;

}

int main(){

    const int row = 3, col = 3;
    int arr[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    // Display the array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int num = sum(arr);
    cout<<"Row Index: "<<num<<endl;
    return 0;
}