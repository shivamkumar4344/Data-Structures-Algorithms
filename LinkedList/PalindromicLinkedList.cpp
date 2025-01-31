#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

Node* revereLL(Node* curr,Node* prev)
{
    if(curr == nullptr)
    {
        return prev;
    }

    Node* temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
    return revereLL(curr,prev);
}

Node* findMiddle(Node* head)
{
    Node* fast = head;
    Node* slow = head;
    while(fast->next != nullptr)
    {
        fast = fast->next;
        if(fast->next != nullptr){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}

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
    while(temp != nullptr)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<endl;
}

bool checkPalindromeLL(Node* head)
{
    //break into 2 halves
    Node* midNode = findMiddle(head);
    Node* head2 = midNode->next;
    midNode->next = nullptr;
    //reverse the 2nd half
    Node* curr = head2;
    Node* prev = nullptr;
    head2 = revereLL(curr,prev);
    //check if it is palindrome or not.
    Node* temp1 = head;
    Node* temp2 = head2;
    while(temp2 != nullptr)
    {
        if(temp1->data != temp2->data)
        {
           return false;   
        }else{
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
}

int main()
{
    Node* head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    printLL(head);

    if(checkPalindromeLL(head))
    {
        cout<<"Palindrome "<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }

    return 0;
}