#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string& s, int i, int j) {
    if (i > j) {
        return true; 
    }
    if (s[i] != s[j]) {
        return false; 
    }
    // Recursive case
    return isPalindrome(s, i + 1, j - 1);
}

int main() {
    string s = "vidhee";
    if (isPalindrome(s, 0, s.length() - 1)) { 
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
