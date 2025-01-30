#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int data)
    {
        this->data=data;
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

void reverseLL(Node* &head)
{
    //empty case
    if(head==NULL)
    {
        cout<<"Can't reverse,not a element in the list.";
        return;
    }
    // single element
    if(head->next == NULL)
    {
        return;
    }
    else{
        //multiple elements

        Node* curr = head;
        Node* prev = nullptr;
        while(curr != NULL)
        {
            Node* currNext = curr->next;
            curr->next = prev;
            prev = curr;
            curr = currNext;
        }
        head = prev;

    }    
}

void insertAtHead(Node* &head,int data)
{
    if(head==NULL)
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

int main()
{
    Node* head = NULL;
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);
    printLL(head);
    reverseLL(head);
    printLL(head);

}