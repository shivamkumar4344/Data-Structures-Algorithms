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

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << front->data << " ";

            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}

int searchInOrder(int inOrder[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(inOrder[i] == element)
        {
            return i;
        }
    }
    return -1;
}

Node* constructTreeFromInOrderAndPostOrder(int inOrder[],int postOrder[],int& postIndex,int inOrderStart,int inOrderEnd,int size)
{
    //base case
    if(postIndex < 0 || inOrderStart > inOrderEnd)
    {
        return NULL;
    }

    int element = postOrder[postIndex];
    postIndex--;
    Node* root = new Node(element);

    int pos = searchInOrder(inOrder,size,element);

    root->right = constructTreeFromInOrderAndPostOrder(inOrder,postOrder,postIndex,pos+1,inOrderEnd,size);

    root->left = constructTreeFromInOrderAndPostOrder(inOrder,postOrder,postIndex,inOrderStart,pos-1,size);

    return root;
}

int main()
{
    int inOrder[] = {10,8,6,2,4,12};
    int postOrder[] = {10,6,8,12,4,2};
    int size = 6;
    int postIndex = size-1;
    int inOrderStart = 0;
    int inOrderEnd = size-1;
    Node* root = constructTreeFromInOrderAndPostOrder(inOrder,postOrder,postIndex,inOrderStart,inOrderEnd,size);

    levelOrderTraversal(root);

    return 0;
}