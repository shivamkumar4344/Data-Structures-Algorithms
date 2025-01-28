#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node* head){

    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<endl;
}

int getLength(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail,int data)
{   
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }else{
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
    }
}

void insertAtTail(Node* &head,Node* &tail,int data){
    //empty list
    if(head == NULL){
        //create a node
        Node* temp = new Node(data);
        //point head and tail to that node.
        head = temp;
        tail = temp;
    }else{
    //creation of new node
    Node* temp = new Node(data);
    //attach tail to new node
    tail->next = temp;
    //point tail to temp
    tail = temp;
    }
}

void insertAtPosition(Node* &head,Node* &tail,int data,int pos)
{
    if(pos <= 1){
        insertAtHead(head,tail,data);
    }
    else if(pos > getLength(head)){
        insertAtTail(head,tail,data);
    }
    else{
        Node* temp = new Node(data);
        Node* curr = head;
        Node* prev = NULL;
        while(pos != 1){
            prev = curr;
            curr = curr->next;
            pos--;
        }

        prev->next = temp;
        temp->next = curr;

    }
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,5);
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,15);
    insertAtHead(head,tail,20);
    insertAtTail(head,tail,500);
    insertAtPosition(head,tail,2000,4);
    printLL(head);

    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* fourth = new Node(40);
    // Node* fifth = new Node(50);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    return 0; 

}