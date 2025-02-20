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
            if(!q.empty())
            {
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

Node* constructTreeFromInOrderAndPreOrder(int inOrder[],int preOrder[],int& preIndex,int inOrderStart,int inOrderEnd,int size)
{
    //base case
    if(preIndex >= size || inOrderStart > inOrderEnd)
    {
        return NULL;
    }

    //1 case solve
    int element = preOrder[preIndex];
    preIndex++;
    Node* root = new Node(element);
    int pos = searchInOrder(inOrder,size,element);

    //recursion
    root->left = constructTreeFromInOrderAndPreOrder(inOrder,preOrder,preIndex,inOrderStart,pos-1,size);
    root->right = constructTreeFromInOrderAndPreOrder(inOrder,preOrder,preIndex,pos+1,inOrderEnd,size);

    return root;
}

int main()
{
    int preOrder[] = {2,8,10,6,4,12};
    int inOrder[] = {10,8,6,2,4,12};
    int preIndex = 0;
    int size = 6;
    int inOrderStart =0;
    int inOrderEnd = size-1;
    Node* root = constructTreeFromInOrderAndPreOrder(inOrder,preOrder,preIndex,inOrderStart,inOrderEnd,size);
    levelOrderTraversal(root);

    return 0;
}