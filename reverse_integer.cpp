#include <bits/stdc++.h> 
using namespace std;
int main(){
    int ans =0;
    int n;
    cout<<"Enter the integer"<<endl;
    cin>>n;
    while(n!=0){
        int digit = n%10;
        ans = (ans *10)+ digit;
        n/=10;
    }
    cout<<ans<<endl;
    return 0;
}