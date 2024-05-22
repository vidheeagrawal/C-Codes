// sumple example of dynamic memory allocation


#include<bits/stdc++.h>
using namespace std;

int getSum(int *arr,int n){
    int sum = 0;
    for(int i =0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;

int  *arr = new int[n];
cout<<"Enter the elements in array: "<<endl;
for(int i =0; i<n ; i++){
    cin>>arr[i];
}

int ans = getSum(arr,n);

cout<<"Sum is: "<<ans<<endl;

}