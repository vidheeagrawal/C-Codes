// Basically, here is a unsorted array and we need to find peak element.
//Eg.: {1,2,5,4,3}
// need to find 5
//output: return index of 5 i.e 2

#include<bits/stdc++.h>
using namespace std;

int findPeak(int arr[],int n){
    int start=0;
    int end= n-1;
    while(start<end){
        int mid = start + (end-start)/2;
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    return start;
}

int main(){
      int arr[]={1,2,5,4,3};
      int n = sizeof (arr)/sizeof (arr[0]);
      int peakIndex = findPeak(arr,n);
      cout<<"Peak element is at Index:"<<peakIndex <<endl;
      return 0;
}