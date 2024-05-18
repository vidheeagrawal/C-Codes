// Basically sometime if we rotate the sorted array 
// Eg: {1,2,3,7,9}
//and rotation {7,9,1,2,3}
//Therefore,here pivot is 9 or 1 because soem people consider 1 as pivot and some 9

//WE WILL CONSIDER 1 AS PIVOT IN OUR CODE:

#include<bits/stdc++.h>
using namespace std;

int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid;
    while(s<e){
        mid=s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}

int main(){
    int arr[]={7,9,1,2,3};
    int size=sizeof(arr)/ sizeof (arr[0]);
    cout<<"Pivot is "<<getPivot(arr,size)<<endl;

    return 0;
}
