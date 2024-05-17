#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int size;
    cout << "Enter the size of array:" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the " << size << " elements in the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Maximum value: " << getMax(arr, size) << endl;
    cout << "Minimum value: " << getMin(arr, size) << endl;

    return 0;
}
