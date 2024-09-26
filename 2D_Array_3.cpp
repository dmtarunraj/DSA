#include<bits/stdc++.h>
using namespace std;

int LargestRowSum(int arr[][4],int n, int m){

    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int row=0;row<n;row++){
        int sum = 0;
        for(int col=0;col<m;col++){
            sum += arr[row][col];
        }
        
        if(sum>maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    
    cout<<"The maximum sum is: "<<maxi<<endl;
    return rowIndex;
}

int main(){
     
      
    int arr[3][4];

    //row wise
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){ 
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int ansIndex = LargestRowSum(arr,3,4);
    cout<<"Max row is index: "<<ansIndex<<endl;

    
    return 0;
}