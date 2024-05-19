//Unlike, move zeros here we move zeros to right but after sorting the array.
//We use inbuilt function sort here, instead we can also make seperate function of sort.

#include <bits/stdc++.h>
using namespace std;

void moveZeros(int arr[], int n) {
    int i = 0;
    for (int j = 0; j < n; j++) {
        if (arr[j] != 0) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

int main() {
    int arr[] = {1, 0, 5, 3, 4, 2, 6, 0, 7, 0, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original Array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Sort the array
    sort(arr, arr + size);
    
    // Move zeros to the end
    moveZeros(arr, size);
    
    cout << "Sorted Array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
