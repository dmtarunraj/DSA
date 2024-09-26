#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;

    while(start <= end){

        if(arr[mid]==key){
            return mid;
        }
        
        // if key is greater than mid go to right side
        if(key>arr[mid]){
            start = mid+1;
        }else{
            end = mid - 1;
        }
    

        mid = start+(end-start)/2;
    }

    return -1;
}


int main () {

    int even[6] = {2,4,6,8,10,12};
    int odd[5] = {1,3,5,7,9};

    int Evenindex = binarySearch(even,6,22);
    int Oddindex = binarySearch(odd,5,55);

    cout<<"Index of 10 is: "<<Evenindex<<endl;
    cout<<"index of 5 is: "<<Oddindex<<endl;

    return 0;
}