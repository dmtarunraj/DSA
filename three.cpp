#include<bits/stdc++.h>
using namespace std;

void update(int arr[], int n){
    cout<<"Inside the main function"<<endl;

    arr[1] = 100;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<< endl <<"Going back to main function"<<endl;

}

int main(){
    int arr[3] = {1,2,3};

    update(arr,3);

    cout<<"Printing ther main function"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }

    return-0;
}