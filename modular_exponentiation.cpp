#include <bits/stdc++.h>
using namespace std;

int modularExponentiation(int x, int n, int m) {
	int result = 1;
	while(n>0){
		if(n&1){
			//odd
			result = (1LL*(result) * (x)%m)%m;
		}
		x = (1LL*(x)%m*(x)%m)%m;
		n >>=1;
	}
	return result;
}
int main() {
    int x, n;
    const int m = 1000000007; 
    cout << "Enter the base (x): ";
    cin >> x;
    cout << "Enter the exponent (n): ";
    cin >> n;
    cout << "Result: " << modularExponentiation(x, n, m) << endl;
    return 0;
}