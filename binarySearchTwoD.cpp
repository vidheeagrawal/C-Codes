#include<bits/stdc++.h>
using namespace std;

bool search(int arr[][4] ,int row , int col , int key){

    int start = 0;
    int end = row * col - 1;
    while(start <= end){
        int mid = start + (end-start)/2;
        int element = arr[mid/col][mid%col];
        if(element == key){
            return true;
        }
        if(element < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return false;
}

int main() {
    int arr[3][4] = {{1, 2, 3,11}, {4, 5, 6,12}, {7, 8, 9,13}};
    int row = 3;
    int col = 4;
    int key;
    cout<<"Enter element to Search:  "<<endl;
    cin>>key;
    cout<<(search(arr,row,col,key) ? "Found" : "Not Found") << endl;

    return 0;

}