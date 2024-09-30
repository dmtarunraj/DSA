#include<bits/stdc++.h>
using namespace std;

void update(int **p2){
    //p2=p2+1;
    // any changes? - No

    //*p2=*p2 +1;
    // any changes? - Yes

    //**p2=**p2+1;
    // any changes? -Yes
}

int main(){

    // int i= 5;
    // int *p = &i;
    // int **p2 = &p;

    // cout<<"Printing P: "<<p<<endl;
    // cout<<"Adress of P: "<<&p<<endl;

    // cout<<*p2<<endl;

    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**p2<<endl;

    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p2<<endl;

    // cout<<&p<<endl;
    // cout<<p2<<endl;

    // cout<<"Before: "<<i<<endl;
    // cout<<"Before: "<<p<<endl;
    // cout<<"Before: "<<p2<<endl;

    // update(p2);

    // cout<<"After: "<<i<<endl;
    // cout<<"After: "<<p<<endl;
    // cout<<"After: "<<p2<<endl;


    // int first = 8;
    // int second = 18;
    // int *ptr = &second;
    // *ptr = 9;
    // cout<< first << " "<< second <<endl;


    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout<< first << endl;


    // int first = 8;
    // int *p = &first;
    // cout<<(*p)++<<" ";
    // cout<< first << endl;


    // int *p = 0;
    // int first = 110;
    // p = &first;
    // cout<< *p << endl;


    // int first = 8;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third +2;
    // cout<< first << " "<< second << " "<<endl;


    // float f= 12.5;
    // float p = 21.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout<< *ptr <<" "<< f << " "<< p <<endl;

    
    // int arr[5];
    // int *ptr;
    // cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;


    // int arr[]= {11,21,31,14};
    // cout<<*(arr)<<" "<<*(arr+1)<<endl;

    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout<< first <<" "<< second <<endl;



    return 0;
}