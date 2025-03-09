#include <bits/stdc++.h>
using namespace std;

int kthLargest(vector<int> &arr, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n = arr.size();
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    for (int i = k; i < n; i++)
    {
        if (pq.top() < arr[i])
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }

    return pq.top();
}

int main()
{
    vector<int> arr = {3, 5, 4, 2, 9};
    int k = 3;
    cout << "Kth largest element are: " << kthLargest(arr, k) << endl;
    return 0;
}