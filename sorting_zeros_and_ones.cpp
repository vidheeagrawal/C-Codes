//Here we r given with array which has 0's and 1's and we need to sort them.
//Eg. arr[5]={0,1,0,1,0}
//After sorting: arr[5]={0,0,0,1,1}


#include<bits/stdc++.h>
using namespace std;

void sort(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
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
    sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}