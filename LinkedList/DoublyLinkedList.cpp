#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
    ~Node()
    {
        cout << "Value deleted at " << this->data << endl;
    }
};

void printLL(Node *head)
{

    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int getLength(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == nullptr)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int data, int pos)
{
    if (pos < 0 || pos > getLength(head))
    {
        cout << "Invalid postion.Inaccessible" << endl;
        return;
    }
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    if (pos == 1)
    {
        insertAtHead(head, tail, data);
    }
    else if (pos == getLength(head))
    {
        insertAtTail(head, tail, data);
    }
    else
    {
        Node *temp = new Node(data);
        Node *currNode = head;
        Node *prevNode = NULL;
        while (pos != 1)
        {
            pos--;
            prevNode = currNode;
            currNode = currNode->next;
        }

        temp->prev = prevNode;
        prevNode->next = temp;
        temp->next = currNode;
        currNode->prev = temp;
    }
}

void deleteNode(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
    {
        cout << "Cannot delete from empty list " << endl;
        return;
    }

    if (head == tail)
    {
        Node *temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = nullptr;
        head->prev = nullptr;
        delete temp;
    }
    else if (pos == getLength(head))
    {
        Node *temp = tail->prev;
        temp->next = nullptr;
        tail->prev = nullptr;
        delete tail;
        tail = temp;
    }
    else
    {
        Node *currNode = head;
        Node *prevNode = NULL;
        while (pos != 1)
        {
            prevNode = currNode;
            currNode = currNode->next;
            pos--;
        }

        prevNode->next = currNode->next;
        currNode->prev = NULL;
        currNode->next = NULL;
        currNode->next = prevNode;
        delete currNode;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtTail(head, tail, 10);
    insertAtPosition(head, tail, 60, 3);
    printLL(head);
    cout << endl;
    deleteNode(head, tail, 2);
    printLL(head);
    return 0;
}
