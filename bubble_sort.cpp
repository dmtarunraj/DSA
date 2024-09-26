#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
         if(swapped == false){
         break;
         }
    }
}

int main() {
    // Correct vector initialization
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();  // Correct way to get the size of a vector

    bubbleSort(arr, n);

    // Output sorted array
    cout << "Sorted Array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
