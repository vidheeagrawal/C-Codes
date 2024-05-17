#include <bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return true;
    }
    return false;
}

int main() {
    int arr[10] = {1, 8, 6, 7, 4, 3, 2, 14, 23, 20};
    int key;
    cout << "Enter element to search:" << endl;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found) {
        cout << "Key is present" << endl;
    } else {
        cout << "Key is absent" << endl;
    }

    return 0;
}
