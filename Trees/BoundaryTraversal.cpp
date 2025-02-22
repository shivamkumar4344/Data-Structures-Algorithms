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

Node *createTree()
{
    int data;
    cout << "Enter data : ";
    cin >> data;

    if (data == -1)
        return NULL;

    Node *root = new Node(data);
    root->left = createTree();
    root->right = createTree();
    return root;
}

void leftBoundary(Node* root)
{
    if(root == NULL) return;

    if(root->left == NULL and root->right == NULL) return;
    cout<<root->data<<" ";
    if(root->left != NULL) leftBoundary(root->left);
    
    else leftBoundary(root->right);
}

void leafBoundary(Node* root)
{
    if(root == NULL) return;

    if(root->left == NULL and root->right == NULL) cout<<root->data<<" ";

    leafBoundary(root->left);

    leafBoundary(root->right);

}


void rightBoundary(Node* root)
{
    if(root == NULL) return;

    if(root->left == NULL and root->right == NULL) return;
    
    if(root->right != NULL) rightBoundary(root->right);

    else rightBoundary(root->right);

    cout<<root->data<<" ";
}

void boundaryTraversal(Node* root)
{
    if(root == NULL) return;

    cout<<endl<<root->data<<" ";
    leftBoundary(root->left);
    leafBoundary(root->left);
    leafBoundary(root->right);
    rightBoundary(root->right);
}



int main()
{
    Node* root = createTree();
    boundaryTraversal(root);
    return 0;
}