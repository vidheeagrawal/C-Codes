#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i =0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
     int arr[5]={5,3,4,2,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubbleSort(arr,n);
    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}