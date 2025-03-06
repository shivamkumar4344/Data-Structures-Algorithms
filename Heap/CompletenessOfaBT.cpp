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


Node* createTree()
{
    int data;
    cout<<"Enter the data : ";
    cin>>data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);
    root->left = createTree();
    root->right = createTree();

    return root;
}

bool checkCompleteness(Node* root)
{
    queue<Node*> q;
    q.push(root);
    bool flag = false;
    while(!q.empty())
    {
        Node* front = q.front();
        q.pop();

        if(front == nullptr) flag = true;

        else{
            if(flag) return false;

            q.push(front->left);
            q.push(front->right);
        }

    }
    return true;
}

int main()
{
    Node* root = createTree();;
    

    if(checkCompleteness(root))
    {
        cout<<"Tree is Completeness of a Binary Tree"<<endl;
    }
    else{
        cout<<"Tree is not Completeness of a Binary Tree"<<endl;
    }

    return 0;
}