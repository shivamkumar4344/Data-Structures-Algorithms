#include<bits/stdc++.h>
using namespace std;


// 1 2 4 6 -1 -1 7 -1 -1 -1 3 -1 5 20 -1 -1 10 -1 8 -1 -1
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

bool pathSum(Node* root,int targetSum,int sum)
{
    //base case
    if(root == NULL) return false;

    sum += root->data;
    if(root->left == NULL and root->right == NULL)
    {
        if(targetSum == sum) return true;
        else return false;
    }
    bool leftAns = pathSum(root->left,targetSum,sum);
    bool rightAns = pathSum(root->right,targetSum,sum);

    return rightAns or leftAns;
}


int main()
{

    Node* root = createTree();
    if(pathSum(root,77,0)){
        cout<<"Sum exists"<<endl;
    }
    else{
        cout<<"Sum doesn't exists"<<endl;
    }

    return 0;
}