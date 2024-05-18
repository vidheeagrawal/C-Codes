// For even and odd both.

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;

        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int odd[5]={4,12,5,18,20};
    int even[6]={4,15,16,20,33,40};
    int odd_index=binarySearch(odd,5,18);
    cout<<"Index of 18 is "<<odd_index<<endl;
    int even_index=binarySearch(even,6,16);
    cout<<"Index of 16 is "<<even_index<<endl;

    return 0;
}