#include <iostream>
using namespace std;

int main() {
   int n ;
   cout<<"Enter the value of n: "<<endl;
   cin>>n;
   
   int **arr = new int *[n];
   for(int i = 0; i<n; i++){
       arr[i]= new int[n];
   }
   cout<<"Enter the elements in array: "<<endl;
   for(int i = 0;i<n;i++){
       for(int j = 0;j<n;j++){
           cin>>arr[i][j];
       }
   }
   
    for(int i = 0;i<n;i++){
       for(int j = 0;j<n;j++){
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }

// As we know we have to clear memory manually in heap so deleting array after use 
    for(int i = 0;i<n;i++){
       delete [] arr[i];
   }
   delete []arr;
    return 0;
}