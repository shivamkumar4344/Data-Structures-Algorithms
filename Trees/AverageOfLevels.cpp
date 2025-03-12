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

Node *createTree()
{
    int data;
    cout << "Enter the data: ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    root->left = createTree();
    root->right = createTree();

    return root;
}

vector<double> averageLevels(Node *root)
{
    vector<double> ans;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            Node *front = q.front();
            q.pop();
            sum += front->data;
            if (front->left != NULL)
                q.push(front->left);

            if (front->right != NULL)
                q.push(front->right);
        }
        ans.push_back(sum / n);
    }
    return ans;
}

int main()
{
    Node *root = createTree();
    vector<double> ans = averageLevels(root);
    for (auto it : ans)
    {
        cout << fixed <<setprecision(5) << it << " ";
    }
    cout << endl;

    return 0;
}