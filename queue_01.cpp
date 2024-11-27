#include<bits/stdc++.h>
using namespace std;



int main(){

    //Create a queue
    queue<int> q;

    q.push(10);
    cout<<"Front of queue is: "<<q.front()<<endl;

    q.push(20);
    cout<<"Front of queue is: "<<q.front()<<endl;

    q.push(30);
    cout<<"Front of queue is: "<<q.front()<<endl;

    cout<<"Size of queue is: "<<q.size()<<endl;  

    q.pop();

    q.pop();
    q.pop();

    cout<<"Size of queue is: "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }

    return 0;
}