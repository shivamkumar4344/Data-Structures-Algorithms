#include<bits/stdc++.h>
using namespace std;

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

void solve(vector<vector<int>>& ans,Node* root,int sum,int targetSum,vector<int> temp)
{
    //base case
    if(root == NULL) return;

    //taking sum and pushing elements
    sum += root->data;
    temp.push_back(root->data);

    //checking for leaf nodes.
    if(root->left == NULL and root->right == NULL) 
    {
        if(sum == targetSum)
        {
            ans.push_back(temp);
        }
        return;
    }

    //recursive call
    solve(ans,root->left,sum,targetSum,temp);
    solve(ans,root->right,sum,targetSum,temp);
} 

vector<vector<int>> pathSum2(Node* root,int targetSum)
{
    vector<vector<int>> ans;
    vector<int> temp;
    solve(ans,root,0,targetSum,temp);
    return ans;

}

int main()
{
    Node* root = createTree();
    vector<vector<int>> ans = pathSum2(root,20);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}