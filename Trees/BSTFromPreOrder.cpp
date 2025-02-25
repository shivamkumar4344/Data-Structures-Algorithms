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

Node* insertAtBST(Node* root,int data)
{
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if(root->data >= data)
    {
        root->left = insertAtBST(root->left,data);
    }
    else{
        root->right = insertAtBST(root->right,data);
    }

    return root;
}


void createBST(Node* &root)
{
    int data;
    cout<<"Enter the data : ";
    cin>>data;

    while(data != -1)
    {
        root = insertAtBST(root,data);
        cout<<"Enter the data : ";
        cin>>data;
    }
}

Node* solve(vector<int>& preOrder,int mini,int maxi,int &i){

    if(i >= preOrder.size()) return NULL;

    if(preOrder[i] < mini or preOrder[i] > maxi) return NULL;

    Node* root = new Node(preOrder[i++]);
    root->left = solve(preOrder,mini,root->data,i);
    root->right = solve(preOrder,root->data,maxi,i);

    return root;
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
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";
            if(front->left != NULL) q.push(front->left);
            if(front->right != NULL) q.push(front->right); 
        }
    }
}


int main()
{
    Node* root = NULL;
    // createBST(root);

    vector<int> preOrder = {20,10,5,15,13,35,30,42};
    int i = 0;
    root = solve(preOrder,INT_MIN,INT_MAX,i);
    levelOrderTraversal(root);
    return 0;
}