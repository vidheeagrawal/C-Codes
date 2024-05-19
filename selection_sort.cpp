#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minIndex=i;
    
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex])
        minIndex=j;
    }
    swap(arr[minIndex],arr[i]);
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

    selectionSort(arr,n);
    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}