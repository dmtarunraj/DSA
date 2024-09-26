#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int n,int key){

    int s=0 , e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid]==key){
            ans = mid;
            e= mid -1;
        }
        else if(key>arr[mid]){ // go to right
            s = mid +1;

        }else if(key<arr[mid]){// go to left
            e = mid -1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lasttOcc(int arr[],int n,int key){

    int s=0 , e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid]==key){
            ans = mid;
            s= mid +1;
        }
        else if(key>arr[mid]){ // go to right
            s = mid +1;

        }else if(key<arr[mid]){// go to left
            e = mid -1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    int even[7]={1,2,3,3,3,3,5};

    cout<<"First occurance of 3 is: "<<firstOcc(even,7,3)<<endl;
    cout<<"Lastt occurance of 3 is: "<<lasttOcc(even,7,3);
    return 0;
}