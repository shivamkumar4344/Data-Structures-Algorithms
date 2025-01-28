#include<bits/stdc++.h>
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

void printLL(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
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
   }
   else{
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
        
   }
}

void insertAtTail(Node* &head,Node* &tail,int data)
{   
    if(head == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}


void insertAtPosition(Node* &head,Node* &tail,int data,int pos)
{
    int len = getLength(head);
    if(pos < 1) return;
    if(pos == 1)
    {
        insertAtHead(head,tail,data);
    }
    else if(pos > len){
        insertAtTail(head,tail,data);
    }
    else{
        Node* temp = new Node(data);
        Node* curr = head;
        Node* prev = NULL;

        while(pos != 1){
            pos--;
            prev = curr;
            curr = curr->next;
        }

        prev->next = temp;
        temp->next = curr;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtTail(head,tail,50);
    insertAtPosition(head,tail,7900,3);
    printLL(head);

    return 0;
}