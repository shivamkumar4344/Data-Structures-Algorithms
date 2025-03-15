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
        this->left = this->right = NULL;
    }
};

Node *createTree()
{
    int data;
    cout << "Enter the data : ";
    cin >> data;

    Node *root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    root->left = createTree();
    root->right = createTree();
    return root;
}

void morrisInOrder(Node *root)
{

    Node *curr = root;
    while (curr != NULL)
    {
        if (!curr->left)
        {
            cout << curr->data << "->";
            curr = curr->right;
        }
        else
        {
            // finding predecessor
            Node *pred = curr->left;
            while (pred->right != NULL && pred->right != curr)
            {
                pred = pred->right;
            }

            if (pred->right == NULL)
            {
                pred->right = curr;
                curr = curr->left;
            }
            else
            {
                pred->right = NULL;
                cout << curr->data << "->";
                curr = curr->right;
            }
        }
    }
}


void morrisPreOrder(Node* root)
{
    Node* curr = root;
    while(curr != NULL)
    {
        if(!curr->left)
        {
            cout<<curr->data<<"->";
            curr = curr->right;
        }   
        else{
            //finding predecessor
            Node* pred = curr->left;
            while(pred->right != NULL && pred->right != curr)
            {
                pred = pred->right;
            }

            if(!pred->right)
            {
                pred->right = curr;
                cout<<curr->data<<"->";
                curr = curr->left;
            }
            else{
                pred->right = NULL;
                curr = curr->right;
            }
        }
    }
}

int main()
{
    Node *root = createTree();
    cout<<endl;
    cout<<"Inorder Traversal : ";
    morrisInOrder(root);
    cout<<endl;
    cout<<"PreOrder Traversal : ";
    morrisPreOrder(root);

    return 0;
}
//1 2 4 -1 -1 5 -1 -1 3 -1 -1