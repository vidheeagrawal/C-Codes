#include <bits/stdc++.h>
using namespace std;

void reverse(string &s) {
    int i = 0;
    int j = s.length() - 1;
    
    while (i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
}

int main() {
    string s = "vidhee";
    reverse(s);
    cout << s << endl;
    return 0;
}
