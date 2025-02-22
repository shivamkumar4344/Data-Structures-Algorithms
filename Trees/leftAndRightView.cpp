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

void leftView(Node *root, int level, vector<int> &ans)
{
    if (root == NULL)
        return;

    if (level == ans.size())
    {
        ans.push_back(root->data);
    }
    leftView(root->left, level + 1, ans);
    leftView(root->right, level + 1, ans);
}

void rightView(Node *root, int level, vector<int> &ans)
{
    if (root == NULL)
        return;

    if (level == ans.size())
    {
        ans.push_back(root->data);
    }
    rightView(root->right, level + 1, ans);
    rightView(root->left, level + 1, ans);
}

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

int main()
{

    Node *root = createTree();
    vector<int> leftAns;
    vector<int> rightAns;

    cout << "Printing level order traversal: " << endl;
    levelOrderTraversal(root);

    cout << "Printing left View: ";
    leftView(root, 0, leftAns);
    for (int i : leftAns)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Printing right View: ";
    rightView(root, 0, rightAns);
    for (int j : rightAns)
    {
        cout << j << " ";
    }
    cout << endl;

    return 0;
}