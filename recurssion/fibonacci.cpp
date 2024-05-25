#include<bits/stdc++.h>
using namespace std;

int  fibo(int n){
    // base case
    if(n == 1)      //return 0 for 1st term
    return 0;
    if(n == 2)      //return 1 for 2nd term 
    return 1;

    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n ;
    cout<<"Enter the value: "<<endl;
    cin>>n;

    int ans = fibo(n);
    cout<< n << "th term is: "<<ans<<endl;
    return 0;
}