#include<bits/stdc++.h>
using namespace std;

void pairSum(int arr[],int size,int sum){
    bool found = false;
    for(int i=0;i<size;i++){ 
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==sum){
                cout<<"("<<arr[i]<<","<<arr[j]<<")";
                found = true; 
            }
        }
    }
    if(!found){
        cout<<"No pair";
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int sum=5;
    cout<<"Pairs with sum "<< sum <<":"<<endl; 
    pairSum(arr,size,sum);
}
