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

Node* insertIntoBST(Node* root,int data)
{
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if(root->data <= data)
    {
        root->right = insertIntoBST(root->right,data);
    }
    else{
        root->left = insertIntoBST(root->left,data);
    }

    return root;
}

void createBST(Node* &root)
{
    int data;
    cout<<"Enter the data: ";
    cin>>data;

    while(data != -1)
    {
        root = insertIntoBST(root,data);
        cout<<"Enter the data: ";
        cin>>data;
    }
}

Node* maxValue(Node* root)
{
    Node* temp = root->right;
    while(temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node* minValue(Node* root)
{
    Node* temp = root->left;
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

void inOrder(Node* root)
{
    if(root == NULL) return;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

Node* deleteBST(Node* root, int target)
{
    //base case
    if(root == NULL) return NULL;

    if(root->data == target)
    {
        //4 cases

        // 1st case -> leaf node
        if(root->left == NULL and root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 2nd case -> right is null and left is not null
        else if(root->left != NULL and root->right == NULL)
        {
            Node* child = root->left;
            delete root;
            return child;
        }
        // 3rd case -> right is not null and left is null
        else if(root->left == NULL and root->right != NULL)
        {
            Node* child = root->right;
            delete root;
            return child;
        }
        //4th case -> right is not null and left is not null
        else{
            //find min from right or max from left
            Node* minV = minValue(root->right);

            //replacement
            root->data = minV->data;

            //deleting the minimum node.
            root->right = deleteBST(root->right,minV->data);

            return root;
        }
    }
    else if(root->data < target)
    {
        root->right = deleteBST(root->right,target);
    }
    else{
        root->left = deleteBST(root->left,target);
    }

    return root;

}

// 50 30 40 20 60 55 70 80 25 -1
int main()
{
    Node* root = NULL;
    createBST(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    deleteBST(root,50);
    inOrder(root);

    return 0;
}