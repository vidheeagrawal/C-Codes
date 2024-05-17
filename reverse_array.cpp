#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of array:" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the " << size << " elements in the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout<<"Reverse Array:"<<endl;
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
