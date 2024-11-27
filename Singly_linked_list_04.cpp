//insertion at position

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void InsertAtHead(Node* &head, int d){
    
    //new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}

void InsertAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;

}

void print(Node* &head){

    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;  
    }
    cout<<endl;
}

void InsertToPosition(Node* & head, Node* &tail,int position, int d){

    //insert at start
    if(position == 1){
        InsertAtHead(head,d);
        return ;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position -1){
        temp = temp -> next;
        cnt++;
    }

    //inserting at last
    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return ;
    }    

    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node* &head){
      
      if(position == 1){
        Node* temp = head;
        head = head -> next;
        //deleting the node 
        temp->next = NULL;
        delete temp;
      }
      else
      {
        //deleting any node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

      }
}

int main(){

    //created new node
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //head printed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    InsertAtTail(tail,12);
    print(head);

    InsertAtHead(head,8);
    print(head);

    InsertToPosition(head,tail,3,11);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deleteNode(3,head);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    return 0;
}