//Here an unsorted array is given we need to move all the zeros in right side if present .
//Eg.: {1,3,0,2,0}
//Output: {1,3,2,0,0}

#include<bits/stdc++.h>
using namespace std;

void moveZeros(int arr[],int n){
    int i=0;
    for(int j =0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
}

int main(){
      int arr[] = {1,0,5,3,4,2,6,0,7,0,8,9};
      int size = sizeof(arr)/sizeof(arr[0]);
      
      cout<<"Original Array:"<<endl;
      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
      cout<<"Sorted Array: "<<endl;
      
      moveZeros(arr,size);

      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
      }
}