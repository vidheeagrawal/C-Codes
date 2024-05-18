#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid){
    int studentCount=1;
    int pageSum=0;

    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int allocateBook(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans =-1;
    while(s<=e){
        int mid=s+(e-s)/2;

        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={12,34,67,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=2;

    cout<<"Minimum number of pages student has to read: "<<allocateBook(arr,n,m)<<endl;
    return 0 ;
}