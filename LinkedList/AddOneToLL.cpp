#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


Node* reverseLL(Node* &head)
{
    Node *curr = head;
    Node *prev = nullptr;
    while (curr != nullptr)
    {
        Node *currNext = curr->next;
        curr->next = prev;
        prev = curr;
        curr = currNext;
    }
    return prev;
}


void insertAtHead(Node* &head,int data)
{
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
}

void printLL(Node* head)
{
    Node* temp = head;
    while(temp != nullptr)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<endl;
}
void  addOne(Node* &head)
{
    head = reverseLL(head);

    Node* temp = head;
    int carry = 1;
    while (temp->next != nullptr)
    {
        int total = temp->data + carry;
        int digit = total%10;
        carry = total/10;

        temp->data = digit;
        temp = temp->next;
        if(carry == 0){
            break;
        }
    }

    //for last node
    if(carry != 0)
    {   
        int total = temp->data + carry;
        int digit = total % 10;
        carry = total / 10;

        temp->data = digit;
        if(carry != 0)
        {
            Node* newNode = new Node(carry);
            temp->next = newNode;
        }

    }
    head = reverseLL(head);
}

int main()
{

    Node* head = NULL;
    insertAtHead(head,9);
    insertAtHead(head,9);
    insertAtHead(head,1);
    printLL(head);
    addOne(head);
    printLL(head);

    return 0;
}