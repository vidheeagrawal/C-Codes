#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    while (n != 0) {
        if (n & 1) {
            count++;
        }
        n >>= 1;
    }
    
    cout << "Number of set bits: " << count << endl;
    return 0;
}
