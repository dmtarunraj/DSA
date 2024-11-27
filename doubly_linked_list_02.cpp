#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next; 
    Node* prev;

    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
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

//Traversing a linkedlist
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//Finding the lenght 
int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

//Inserting at head
void insertAtHead(Node* &head, Node* &tail, int d){

    if(head == NULL){
        Node*  temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}


//Inserting at Tail
void insertAtTail(Node* &head,Node*  &tail, int d){

   //cout<<"tail: "<<tail<<endl;
    if(tail == NULL){
        Node*  temp = new Node(d);
        head = temp;
        tail = temp;
        
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp; 
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    //insert at start
    if(position == 1){
        insertAtHead(head,tail,d);
        return ;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position -1 && temp != NULL){
        temp = temp -> next;
        cnt++;
    }

    if (temp == NULL) {
        // Insert at the end
        insertAtTail(head, tail, d);
        return;
    }

    //inserting at last
    if(temp->next == NULL){
        insertAtTail(head,tail,d);
        return ;
    }    

    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

}

void deleteNode(int position, Node* &head, Node* &tail){
      
      if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = head -> next; 
         if (head != NULL) {
            head->prev = NULL;
        } else {
            // If the list is now empty, update the tail as well
            tail = NULL;
        }
        temp->next = NULL;
        delete temp;  //deleting the node
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

        if (curr == NULL) {
            // If the position is out of bounds, return
            cout << "Position out of bounds" << endl;
            return;
        }

        if(curr->next != NULL){
            curr->next->prev = curr->prev;
        }else{
            tail = curr->prev;
        }

        curr->prev->next = curr->next;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
      }
}

int main(){

    //Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    //print(head);

    cout<<getLength(head)<<endl;

    insertAtHead(head,tail, 11);
    print(head);
    
     cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl; 

    insertAtHead(head,tail, 12);
    print(head);

     cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl; 

    insertAtHead(head,tail, 13);
    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl; 

    insertAtTail(head,tail, 9);
    print(head);

     cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl; 

    insertAtTail(head,tail, 8);
    print(head);

     cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl; 

    insertAtTail(head,tail, 7);
    print(head);

     cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl; 

    insertAtPosition(head,tail,3,100);
    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl; 

    insertAtPosition(head,tail,1,101);
    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;   

    insertAtPosition(head,tail,9,102);
    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl; 

    deleteNode(9,head,tail);
    print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl; 

    return 0;
}


