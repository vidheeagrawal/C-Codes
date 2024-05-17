#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    bool a = false;
    for(int i=0;i<=30;i++){
        int ans = pow (2,i);
        if(ans ==n){
        a= true;
        break;
    }
}
if(a){
    cout<<"True"<<endl;
}
else{
    cout<<"False"<<endl;
}
}