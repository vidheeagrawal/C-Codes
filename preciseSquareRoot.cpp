//Here unlike quare root code, we will find precise square root of any number

#include<bits/stdc++.h>
using namespace std;

long long int sqrtInteger(int n){
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

double precise(int n,int d,int tempSol){
    double factor = 1;
    double ans = tempSol;

    for(int i=0;i<d;i++){
        factor/=10;

        for(double j=ans ;j*j<n;j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the value of integer: "<<endl;
    cin>>n;
    int d;
    cout<<"Enter the number of decimal: "<<endl;
    cin>>d;

    int tempSol=sqrtInteger(n);
    cout<<"Answer is "<<precise(n,d,tempSol);
    return 0;
}