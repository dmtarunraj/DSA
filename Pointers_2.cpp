#include<bits/stdc++.h>
using namespace std;

void print(int *p){
    cout<< *p <<endl;
}

void update(int *p){

   //p = p+1;
    //cout<< p <<endl;
    *p = *p +1;
    cout<< *p <<endl;
}

int main(){

    // int arr[3] = {2,3,4};
    // cout<<"Adress of 1st place: "<<arr<<endl;
    // cout<<arr<<endl;
    // cout<<"Adress of 1st place: "<<&arr[0]<<endl;

    // cout<<"4th "<<*arr +2<<endl;
    // cout<<"4th "<<arr[2]<<endl;
    // cout<<"4th "<<*(arr + 1)<<endl;
    // cout<<"4th "<<*(arr)+1<<endl;

    //Differences in pointer and array
    // int temp[10];
    // cout<<sizeof(temp)<<endl;
    // cout<<sizeof(*temp)<<endl;
    // cout<<sizeof(&temp)<<endl;

    // int *ptr = &temp[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;

    //Using " & " in pointers
    // int a[20] = {1,2,3,4,5};
    // cout<<&a[0]<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl;

    // int *p = &a[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;


    // int arr[10];
    // // arr = arr+1;  error
    // int *ptr = &arr[0];
    // cout<<ptr<<endl; 
    // ptr = ptr+1;
    // cout<<ptr<<endl;


    // // Characters and Arrays
    // int arr[5] = {1,2,3,4,5};
    // char ch[5] = "abcd";
    // cout<<arr<<endl; //prints the adress of arr[0].
    // cout<<ch<<endl; //prints the entire string.

    // char *c = &ch[0];
    // cout<<c<<endl; //prints the entire string.

    // char temp = 'Z';
    // char *p = &temp;
    // cout<< p <<endl;


    //Pointers and Functions
    int value = 5;
    int *p = &value;
    
    cout<<"Before: "<< p <<endl;
    update(p);
    cout<<"After: "<< p <<endl;

    return 0;
}

