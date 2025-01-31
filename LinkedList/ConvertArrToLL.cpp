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

void printLL(Node* head)
{
    Node* temp = head;
    while(temp != nullptr)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<endl;
}

Node* ArrtoLL(vector<int>& arr)
{
    Node* head = new Node(arr[0]);
    Node* temp = head;
    int n = arr.size();
    for(int i=1;i<n;i++){
        Node* currNode = new Node(arr[i]);
        temp->next = currNode;
        temp = currNode;
    }
    return head;
}

void insertAtPosition(Node* &head,int pos,int data)
{
    if(pos == 1)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }else{
    Node* curr = head;
    Node* prev = NULL;
    while(pos != 1)
    {
        pos--;
        prev = curr;
        curr = curr->next;
    }

    Node* newNode = new Node(data);
    prev->next = newNode;
    newNode->next = curr;
    }
}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    for(int i:arr)
    {
        cout<<i<<" ";
    }cout<<endl;
    Node* ans = ArrtoLL(arr);
    insertAtPosition(ans,1,50);
    printLL(ans);
    return 0;

}