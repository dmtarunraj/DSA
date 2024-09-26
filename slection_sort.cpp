#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr, int n) {

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }
}

int main() {

    vector<int> arr = {6, 4, 0, 3, 1};  // Using vector instead of array
    int n = arr.size();  // Get the size of the vector

    selectionSort(arr, n);  // Call selection sort, no return value needed

    cout << "Sorted Array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
