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
    int data;
    cout << "Enter the data: ";
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

int maxDepth(Node *root)
{
    if (root == NULL)
        return 0;

    int leftH = maxDepth(root->left);
    int rightH = maxDepth(root->right);
    return max(leftH, rightH)+1;
}

int main()
{

    Node* root = createTree();
    cout<<"Maximum depth of the Binary tree is : "<<maxDepth(root)<<endl;

    return 0;
}