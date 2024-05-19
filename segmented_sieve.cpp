#include <bits/stdc++.h>
using namespace std;

void simpleSieve(int n) {
    vector<bool> prime(n + 1, true);
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) 
                prime[j] = false;
        }
    }

    for (int i = 2; i <= n; i++) {
        if (prime[i] == true) {
            cout << i << " ";
        }
    }
    cout << endl; 
}

int main() {
    int n;
    cout << "Enter a number up to you want Prime Number: ";
    cin >> n;
    cout << "Prime numbers up to " << n << " are: ";
    simpleSieve(n);
    return 0;
}
