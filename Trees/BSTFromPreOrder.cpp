#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertAtBST(Node* root,int data)
{
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if(root->data >= data)
    {
        root->left = insertAtBST(root->left,data);
    }
    else{
        root->right = insertAtBST(root->right,data);
    }

    return root;
}


void createBST(Node* &root)
{
    int data;
    cout<<"Enter the data : ";
    cin>>data;

    while(data != -1)
    {
        root = insertAtBST(root,data);
        cout<<"Enter the data : ";
        cin>>data;
    }
}



int main()
{
    Node* root = NULL;
    createBST(root);

    return 0;
}