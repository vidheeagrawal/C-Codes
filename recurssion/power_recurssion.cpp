#include<bits/stdc++.h>
using namespace std;


int power(int x,int n){
    if(n==0)
    return 1;

    // int smaller =  power(x,n-1);
    // int bigger = x * smaller;

    // return bigger;

    //or

    return x*power(x,n-1);
}
int main(){
    int x;
    cout<<"Enter the number: "<<endl;
    cin>>x;
    int n;
    cout<<"Enter the power: "<<endl;
    cin>>n;

    int ans = power(x,n);

    cout << ans << endl;
}