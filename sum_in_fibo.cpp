//Here we need to find sum of even numbers in fibonacci series;

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a=0,b=1;
    int sum=0;
    int nextNumber;
    for(int i=0;i<n;i++){
        if (b%2==0){
            sum+=b;
        }
        nextNumber=a+b;
        a=b;
        b=nextNumber;
    }
    cout<<sum<<endl;
    return 0;
}