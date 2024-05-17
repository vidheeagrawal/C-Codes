#include<iostream>
using namespace std;
int main(){
    int n,digit,p=1,sum=0;
    cin>>n;
    while(n!=0){
        digit=n%10;
        p*=digit;
        sum+=digit;
        n/=10;

    }
    cout<<sum<<endl<<p<<endl;
    
}