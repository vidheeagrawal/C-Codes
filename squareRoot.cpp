//Here we will find sqaure root of any integer 
//Not the precise square root nearest value 
//Eg. Squaure root of 35 is 5;

#include<bits/stdc++.h>
using namespace std;

long long int binarySearch(int n){
    int s=0;
    int e=n-1;
    long long int mid;
    long long int ans =-1;
    while(s<=e){
        mid=s+(e-s)/2;
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans =mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

int main(){
    int n=35;
    long long int result=binarySearch(n);

    if(result!=-1){
        cout<<"Square root of "<<n <<" is : "<<result<<endl;
    }
    else{
        cout<<"Square root not found."<<endl;
    }
    return 0;
}