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

Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (root->data <= data)
    {
        root->right = insertIntoBST(root->right, data);
    }
    else
    {
        root->left = insertIntoBST(root->left, data);
    }

    return root;
}

void createBST(Node *&root)
{
    int data;
    cout << "Enter the data : ";
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cout << "Enter the data : ";
        cin >> data;
    }
}

bool searchInBST(Node *root, int target)
{
    if (root == NULL)
        return false;

    if (root->data == target)
        return true;

    bool leftAns = false;
    bool rightAns = false;
    if (root->data > target)
    {
        leftAns = searchInBST(root->left, target);
    }
    else
    {
        rightAns = searchInBST(root->right, target);
    }

    return leftAns || rightAns;
}

// 50 30 40 20 60 55 70 80 25 -1

int main()
{
    Node *root = NULL;
    createBST(root);
    cout << endl;
    int target;
    cin >> target;
    if (searchInBST(root, target))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}