#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* right;
        Node* left;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createTree()
{
    int data;
    cout<<"Enter the data : ";
    cin>>data;

    if(data == -1) return NULL;

    Node* root = new Node(data);
    root->left = createTree();
    root->right = createTree();
    return root;
}

int height(Node* root)
{
    if(root == NULL) return 0;

    int leftH = height(root->left);
    int rightH = height(root->right);
    int maxH = max(leftH,rightH) + 1;
    return maxH;
}

bool isBalanced(Node* root)
{
    if(root == NULL) return true;

    int diff = abs(height(root->left) - height(root->right));

    bool leftAns = isBalanced(root->left);
    bool rightAns = isBalanced(root->right);

    return (leftAns and rightAns and (diff <= 1));

}

int main()
{
    Node* root = createTree();
    if(isBalanced(root))
    {
        cout<<"Tree is balanced "<<endl;
    }
    else{
        cout<<"tree is not balanced"<<endl;
    }
    return 0;

}