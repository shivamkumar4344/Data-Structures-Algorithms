#include <bits/stdc++.h>
using namespace std;

//GFG -  Given k sorted arrays arranged in the form of a matrix of size k * k. The task is to merge them into one sorted array. Return the merged sorted array
class node
{
public:
    int data;
    int row;
    int col;
    node(int data, int row, int col)
    {
        this->data = data;
        this->col = col;
        this->row = row;
    }
};

class comapre
{
    public:
    bool operator()(node *a, node *b)
    {
        return a->data > b->data;
    }
};

vector<int> mergeKArrays(vector<vector<int>> arr, int k)
{
    // creation of a min heap
    priority_queue<node *, vector<node *>, comapre> pq;

    // inserting all the first k elements
    for (int i = 0; i < k; i++)
    {
        node *temp = new node(arr[i][0], i, 0);
        pq.push(temp);
    }

    vector<int> ans;

    while (!pq.empty())
    {
        node* temp = pq.top();
        pq.pop();
        ans.push_back(temp->data);

        int row = temp->row;
        int col = temp->col;

        if(col+1 < arr[row].size()){
            node* next = new node(arr[row][col+1],row,col+1);
            pq.push(next);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> ans = mergeKArrays(arr,k);

    for(int it:ans) cout<<it<<" ";
}