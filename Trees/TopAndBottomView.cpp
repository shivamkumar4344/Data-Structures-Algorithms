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

Node *createTree()
{
    int data;
    cout << "Enter data : ";
    cin >> data;

    if (data == -1)
        return NULL;

    Node *root = new Node(data);
    root->left = createTree();
    root->right = createTree();
    return root;
}

void topView(Node* root)
{
    map<int,int> mp;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<Node*,int> temp = q.front();
        q.pop();

        Node* front = temp.first;
        int hd = temp.second;

        if(mp.find(hd) == mp.end())
        {
            mp[hd] = front->data;
        }

        if(front->left != NULL) q.push(make_pair(front->left,hd-1));
        if(front->right != NULL) q.push(make_pair(front->right,hd+1));
    }
    cout<<endl;
    for(auto it:mp){
        cout<<it.second<<" ";
    }cout<<endl;

}


void bottomView(Node* root)
{
    map<int,int> mp;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));

    while(!q.empty())
    {
        pair<Node*,int> temp = q.front();
        q.pop();
        Node* front = temp.first;
        int hd = temp.second;

        //overwrite
        mp[hd] = front->data;

        if(front->left != NULL) q.push(make_pair(front->left,hd-1));
        if(front->right != NULL) q.push(make_pair(front->right,hd+1));

    }

    for(auto it:mp)
    {
        cout<<it.second<<" ";
    }cout<<endl;
}

int main()
{
    Node* root = createTree();
    // 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1
    topView(root);
    bottomView(root);
    return 0;
}