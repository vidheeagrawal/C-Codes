//intersection of two sorted array.

#include<bits/stdc++.h>
using namespace std;

void intersection(int arr1[],int n,int arr2[],int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if (arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

int main(){
    int arr1[5]={1,2,3,4,5};
    int n=5;
    int arr2[5]={1,3,6,7,8};
    int m=5;

     intersection(arr1,n,arr2,m);
}