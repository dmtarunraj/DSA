#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }

    return 0;
}

int main(){

    int arr[5]={4,6,1,7,9};

    //whether 1 is present in it or not

    cout<<"Enter the key: "<<endl;
    int key;
    cin>>key;

    bool found = search(arr,5,key);

    if(found){
        cout<<"Key is present"<<endl;
    }else{
        cout<<"Key is not presnt"<<endl;
    }

    return 0;
}