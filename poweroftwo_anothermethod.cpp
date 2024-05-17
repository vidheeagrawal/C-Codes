#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    return (n != 0) && ((n & (n - 1)) == 0);
}

int main() {
    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the " << size << " elements in the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ": " << (isPowerOfTwo(arr[i]) ? "power of 2" : "not power of 2") << endl;
    }
    return 0;
}
