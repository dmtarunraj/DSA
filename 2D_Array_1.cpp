#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4],int target,int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==target){
                return true;
        }
        }
    }
    return false;
}


int main(){

    int arr[3][4];

    //row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    // //column wise
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }

    for(int i=0;i<3;i++){ 
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the Element to search: "<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"Element is Present in the Matrix"<<endl;
    }else{
        cout<<"Element not found."<<endl;
    }


    return 0;
}