#include <bits/stdc++.h>
using namespace std;

bool check(string s, int i, int j) {
    if (i > j)
        return true;
    
    if (s[i] != s[j]) {
        return false;
    } else {
        return check(s, i + 1, j - 1);
    }
}

int main() {
    string s = "abddba";
    cout << s << endl;
    
    if (check(s, 0, s.length() - 1)) {
        cout << "is palindrome" << endl;
    } else {
        cout << "not palindrome" << endl;
    }
    return 0;
}
