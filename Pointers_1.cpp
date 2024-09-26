#include<bits/stdc++.h>
using namespace std;

int main(){

    int num = 10;
    int* ptr = &num;
    //num++;
    cout<<num<<endl;

    //adress of num
    cout<<"Adress of num: "<<&num<<endl;

    //adress using ptr
    (*ptr)++;
    cout<<"Value of num: "<<*ptr<<endl;
    cout<<"Adress of num using ptr: "<<ptr<<endl;

    cout<<"Size of interger: "<<sizeof(num)<<endl;
    cout<<"Size of pointer: "<<sizeof(ptr)<<endl;

    int *p = &num;
    cout<<"Value of num: "<<*p<<endl;
    (*p)++;
    cout<<"Value of num: "<<*p<<endl;

    int *q = p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    int z= 5;
    int *r = &z;
    *r = *r+1;
    cout<<*r<<endl;
    cout<<"Before r: "<<r<<endl;
    r=r+1;
    cout<<"After r: "<<r<<endl;

    return 0;
}