#include<bits/stdc++.h>
using namespace std;
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

int getLength(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void middleNode(Node* head)
{
    int currPos = 1;
    int pos = getLength(head) / 2 + 1;
    Node* temp = head;
    while(currPos != pos)
    {
        currPos++;
        temp = temp->next;
    }
    cout<<temp->data<<"->";
}

void insertAtHead(Node* &head,int data)
{
    if(head == NULL)
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
int main()
{
    Node* head = NULL;
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);
    insertAtHead(head,40);
    printLL(head);
    middleNode(head);
    
    return 0;

}