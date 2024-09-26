#include<bits/stdc++.h>
using namespace std;

int main(){
     
    int n, sum = 0;

    cout << "Enter the number of elements: " << endl;
    cin >> n;

    int arr[n];  // Declare array of size n
    
    cout << "Enter the elements: " << endl;
    for(int i = 0; i < n; i++){  // Loop should run from 0 to n-1
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of array is: " << sum << endl;

    return 0;
}
