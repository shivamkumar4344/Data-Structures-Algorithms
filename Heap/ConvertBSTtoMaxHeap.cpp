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
        Node* root = new Node(data);
        return root;
    }

    if(root->data > data)
    {
        root->left = insertIntoBST(root->left,data);
    }
    else{
        root->right = insertIntoBST(root->right,data);
    }
    return root;
}

void createBST(Node* &root)
{
    int data;
    cin>>data;

    while(data != -1)
    {
        root = insertIntoBST(root,data);
        cin>>data;
    }
}

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
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
                q.push(front->left);
            if(front->right != NULL)
                q.push(front->right);
        }
    }
    
}

//store inorder
void storeInorder(Node* root,vector<int>& arr)
{
    if(root == NULL) return;

    //LNR
    storeInorder(root->left,arr);
    arr.push_back(root->data);
    storeInorder(root->right,arr);
}

//replacement using postOrder.
void replaceUsingPostOrder(Node* root,vector<int> arr,int &index)
{
    if(root == NULL) return;

    //LRN
    replaceUsingPostOrder(root->left,arr,index);
    replaceUsingPostOrder(root->right,arr,index);
    root->data = arr[index];
    index++;

}

Node* convertBSTtoMaxHeap(Node* root)
{
    vector<int> inorder;
    storeInorder(root,inorder);

    int index = 0;
    replaceUsingPostOrder(root,inorder,index);
    
    return root;
}

int main()
{
    Node* root = NULL;
    createBST(root);
    cout<<"Only level orderTraversal: "<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    convertBSTtoMaxHeap(root);
    cout<<"After changing into max heap: "<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    return 0;
    
}