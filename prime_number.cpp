// #include<bits/stdc++.h>
// using namespace std;

// bool isPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//             return 1;
// }

// int main(){
//     int n;
//     cout<<"Enter any integer"<<endl;
//     cin>>n;
//     if(isPrime(n))
//     cout<<"is prime";
//     else
//     cout<<"not prime";
//     return 0;
// }


//other method

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    if (n <= 3) {
        return true; // 2 and 3 are prime numbers
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false; // Eliminate multiples of 2 and 3
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter any integer: ";
    cin >> n;
    if (isPrime(n)) {
        cout << n << " is prime" << endl;
    } else {
        cout << n << " is not prime" << endl;
    }
    return 0;
}
