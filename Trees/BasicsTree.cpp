#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *createTree()
{

    cout << "Enter the value : " ;
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    root->left = createTree();
    root->right = createTree();

    return root;
}

int main()
{
    Node* root = createTree();
    cout << root->data << " ";
    return 0;
}