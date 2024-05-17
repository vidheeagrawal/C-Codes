//The complement of an interger is the integer you get when you flip all the 0's and 1's an all the 1's and 0's in it's binary representation.
// For example: 101=5, its bits reversal be 010 = 2, you need to get output 2 when u give input 5.
// We will do this by  creating a mask.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter any integer"<<endl;
    cin>>n;
    int m = n;
    int mask =0;
    if(n==0)
    return 1;
    while(m!=0){
        mask = (mask<<1)|1;
        m=m>>1;
    }
    int ans =(~n)&mask;
    cout<<ans;
    return 0;


}