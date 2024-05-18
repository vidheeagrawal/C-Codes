//Here we need to find first and last occurence of element in sorted array.
// suppose array is {1,2,2,2,3}
//Here first occurence of 2 is 1 and last occurence is 3.

#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1; 
        } else if (key > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int lastOccurence(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;  
        } else if (key > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[5] = {1, 2, 2, 2, 3};
    cout << "First Occurrence of 2 is at index: " << firstOccurence(arr, 5, 2) << endl;
    cout << "Last Occurrence of 2 is at index: " << lastOccurence(arr, 5, 2) << endl;

    return 0;
}
