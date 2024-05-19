#include<bits/stdc++.h>
using namespace std;

//METHOD 1

// bool isPallindrone(int x){
//     if(x<0||(x % 10 == 0  &&  x != 0)){
//         return false;
//     }
//     int reversed = 0;
//     int original = x;

//     while(x>0){
//         int digit = x % 10;
//         if(reversed>(INT_MAX-digit)/10){
//             return false;
//         }
//         reversed = reversed * 10 + digit;
//         x/=10;
//     }
//     return original == reversed;
// }


//METHOOD 2

bool isPallindrone(int x){
    if(x<0){
        return false;
    }
    long long reversed = 0;
    long long temp = x;
    while(temp != 0){
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    return (reversed == x);

}


int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    bool result= isPallindrone(n);
    if(result){
        cout<<"It is a pallindrone number."<<endl;
    }
    else{
        cout<<"It is not a pallindrone number"<<endl;
    }
    return 0;
}