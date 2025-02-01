#include<bits/stdc++.h>
using namespace std;
//remember to pass by reference
class Node{
    public:
        int data;
        Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


void insertAtHead(Node* &head,int data)
{
    if(head ==  NULL)
    {
        Node* temp = new Node(data);
        head = temp;
    }
    else{
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}

void printLL(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<endl;
}

void reverseLL(Node* &head)
{
    if(head==NULL or head->next == NULL)
    {
        return;
    }
    else{
        Node* curr = head;
        Node* prev = nullptr;
        while(curr != nullptr)
        {
            Node* currNext = curr->next;
            curr->next = prev;
            prev = curr;
            curr = currNext;
        }
        head = prev;
    }
}

int main()
{
    Node* head = NULL;
    insertAtHead(head,29);
    insertAtHead(head,20);
    insertAtHead(head,10);
    printLL(head);
    reverseLL(head);
    printLL(head);
    return 0;
}