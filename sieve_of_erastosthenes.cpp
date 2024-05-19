#include <bits/stdc++.h>
using namespace std;

int countPrime(int n) {
    int cnt = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            cnt++;
            for (int j = 2 * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    return cnt;
}

int main() {
    int n;
    cout << "Enter a number up to you want Prime Number: ";
    cin >> n;
    cout << "Number of prime numbers up to " << n << " is " << countPrime(n) << endl;
    return 0;
}
