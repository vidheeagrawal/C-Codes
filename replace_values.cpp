//basically this in this code you r given with a array and let it be cost of items and you need to print updated array with discount.
//let us consider discount is of 10% which is equal to 0.1

#include<bits/stdc++.h>
using namespace std;

void discount(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]-(0.1*arr[i]);
    }
}

int main(){
    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Original Array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Updated Array:"<<endl;
    discount(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}