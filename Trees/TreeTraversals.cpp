#include <bits/stdc++.h>
using namespace std;

// 10 20 40 -1 -1 50 -1 -1 30 60 -1 -1 70 -1 -1

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

Node* createTree()
{
    int data;
    cout<<"Enter the data : ";
    cin>>data;

    if(data == -1)
    {
        return NULL;
    }

    Node* root = new Node(data);

    root->left = createTree();
    root->right = createTree();
    return root;
}

void preOrder(Node* root)
{
    //base case
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}

void inOrder(Node* root)
{
    if(root == NULL)
    {
        return ;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* front = q.front();
        q.pop();

        if(front == NULL)
        {
            cout<<endl;
            if(!q.empty()){
            q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";

            if(front->left != NULL)
            {
                q.push(front->left);
            }
            if(front->right != NULL)
            {
                q.push(front->right);
            }

        }
    }

}


int main()
{
    Node* root= createTree();
    cout<<"Printing preorder: ";
    preOrder(root);
    cout<<endl;

    cout<<"Printing inorder: ";
    inOrder(root);
    cout<<endl;

    cout<<"Printing postorder: ";
    postOrder(root);
    cout<<endl;

    cout<<"Printing Level-Order Traversal : ";
    levelOrderTraversal(root);
    cout<<endl;
    

    return 0;
}