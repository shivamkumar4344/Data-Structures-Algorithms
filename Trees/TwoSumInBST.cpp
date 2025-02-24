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
        this->left = this->right = NULL;
    }
};


Node* insertInBST(Node* root,int data)
{
    if(root == NULL){
        Node* root = new Node(data);
        return root;
    };

    if(root->data < data)
    {
        root->right = insertInBST(root->right,data);
    }
    else{
        root->left = insertInBST(root->left,data);
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
        root = insertInBST(root,data);
        cout<<"Enter the data : ";
        cin>>data;
    }
}

void inOrder(Node* root,vector<int> &ans)
{
    if(root == NULL) return;

    inOrder(root->left,ans);
    ans.push_back(root->data);
    inOrder(root->right,ans);
}

bool twoSum(Node* root,int target)
{
    vector<int> ans;
    inOrder(root,ans);
    int i = 0, j = ans.size() - 1; 
    while(i < j)
    {
        int sum = ans[i] + ans[j];

        if(sum == target) return true;
        else if(sum > target) j--;
        else i++;
    }
    return false;
}


int main()
{
    Node* root = NULL;
    createBST(root);
    if(twoSum(root,490))
    {
        cout<<"Two Sum is present"<<endl;
    }else{
        cout<<"Two Sum is not present"<<endl;
    }
    return 0;
}