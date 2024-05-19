#include<bits/stdc++.h>
using namespace std;

bool isPossible(int stalls[],int n,int k,int mid){
    int cowCount = 1;
    int lastPos = stalls[0];
    for(int i=0;i<n;i++){
        if(stalls[i]-lastPos>=mid){
            cowCount++;
            lastPos = stalls[i];
            if(cowCount == k){
                return true;
            }
        }
    }
    return false;
}

int aggressiveCows(int stalls[],int n,int k){
    sort(stalls,stalls+n);
    int s=0;
    int e=stalls[n-1]-stalls[0];
    int ans = -1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(stalls,n,k,mid)){
            ans = mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

int main(){
    int stalls[]={1,2,8,4,9};
    int n=sizeof (stalls)/sizeof(stalls[0]);
    int k=3;

    cout<<"Largest minimum distance is : "<<aggressiveCows(stalls,n,k)<<endl;

    return 0;
}