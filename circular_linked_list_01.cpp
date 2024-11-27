#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Deleted node with value: " << value << endl;
    }    
};

void print(Node* & tail){
    

    if(tail == NULL){
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = tail;
    
    do{
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != tail);
    cout<<endl;
}


void insertNode(Node* &tail, int element, int d){
   
    //Empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }else{
        //Assuming that the element is present in the list
        //Non - empty list

        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        //element found -> curr is present on the element wala node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int element){
     
     //em[pty list
     if(tail == NULL){
        cout << "List is empty" << endl;
        return;
     }else{
        //Non - empty list
        //Assuming that value is present in the list

        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data != element){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        //1 node list
        if(curr == prev){
            tail = NULL;
        }

        //2 node list
        else if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
     }

}


int main(){

    Node* tail = NULL;

    // insertNode(tail, 1, 2);
    // print(tail);

    // insertNode(tail,2,3);
    // print(tail);

    // insertNode(tail,3,4);
    // print(tail);

    // insertNode(tail,4,5);
    // print(tail);

    // insertNode(tail,3,10);
    // print(tail);

    // insertNode(tail,5,11);
    // print(tail);

    deleteNode(tail,2);
    print(tail);

    return 0;
}