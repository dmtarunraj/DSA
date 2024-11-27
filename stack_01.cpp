#include<bits/stdc++.h>
using namespace std;

int main(){

    //Creation of stack
    stack<int> s;

    //push operation
    s.push(10);
    s.push(20);

    //pop operation
    s.pop();

    //cout<<"Elements in stack are: " << s <<endl;

    cout<<"Printing top element: "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size of stack: "<<s.size()<<endl;
    return 0;
}