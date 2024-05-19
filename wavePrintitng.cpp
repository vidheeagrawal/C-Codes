#include<bits/stdc++.h>
using namespace std;

void wavePrintitng (int arr[][3], int n , int m){
    for(int col = 0 ; col < m ; col++){
        if(col & 1){
            for(int row = n - 1 ; row >= 0 ; row--){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int row = 0 ; row < n ; row++){
                cout << arr[row][col] << " ";
            }
        }
    }
}

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n = 3;
    int m = 3;

    cout<<"Original Array: "<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Wave Printing: "<<endl;
    wavePrintitng(arr,n,m);
    return 0;

}