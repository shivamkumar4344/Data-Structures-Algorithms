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

Node *insertIntoBST(Node* root, int data)
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

void createBST(Node* &root)
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

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout<<endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
}

void sortedBSTOrInorder(Node* root)
{
    if (root == NULL) return;

    sortedBSTOrInorder(root->left);
    cout<<root->data<<" ";
    sortedBSTOrInorder(root->right);
}

Node* minValue(Node* root)
{
    if(root == NULL) return NULL;

    Node* temp = root;
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node* maxValue(Node* root)
{
    if(root == NULL) return NULL;

    Node* temp = root;
    while(temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}
// 50 30 40 20 60 55 70 80 25 -1
int main()
{
    Node *root = NULL;
    createBST(root);
    levelOrderTraversal(root);
    cout<<endl;
    sortedBSTOrInorder(root);
    cout<<endl;
    cout<<"Max Value : "<<maxValue(root)->data<<endl;
    cout<<"Min Value : "<<minValue(root)->data<<endl;
    return 0;
}