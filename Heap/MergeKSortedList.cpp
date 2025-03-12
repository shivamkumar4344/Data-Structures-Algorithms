//LC(Hard) - 23


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


class compare{
    public:
    bool operator()(Node* a, Node* b){
        return a->data > b->data;
    }
};

Node* mergeKLists(vector<Node*>& arr){
    //creation of a min heap
    priority_queue<Node*,vector<Node*> ,compare> pq;
    int k = arr.size();
    if(k==0) return NULL;
    //inserting first k elements
    for(int i=0;i<k;i++)
    {
        if(arr[i] != NULL) pq.push(arr[i]);
    }

    Node* head = NULL;
    Node* tail = NULL;
    while(!pq.empty())
    {
        Node* temp = pq.top();
        pq.pop();
        if(temp->next != NULL)
        {
            pq.push(temp->next);
        }

        if(head == NULL)
        {
            //answer LL is empty
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }
    return head;
}

void printLL(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

int main() {

    Node* list1 = new Node(1);
    list1->next = new Node(4);
    list1->next->next = new Node(5);

    Node* list2 = new Node(1);
    list2->next = new Node(3);
    list2->next->next = new Node(4);

    Node* list3 = new Node(2);
    list3->next = new Node(6);

    vector<Node*> arr = {list1, list2, list3};

    Node* result = mergeKLists(arr);

    cout << "Merged Linked List: ";
    printLL(result);

    return 0;
}