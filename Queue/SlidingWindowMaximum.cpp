#include <bits/stdc++.h>
using namespace std;

// Brute force approach
// T.C = O(n*k)
// S.C = O(n-k)

vector<int> bruteMaximum(vector<int> &arr, int n, int k)
{

    vector<int> ans;
    for (int i = 0; i <= n - k; i++)
    {
        int maxi = arr[i];
        for (int j = i; j <= i + k - 1; j++)
        {
            maxi = max(maxi, arr[j]);
        }
        ans.push_back(maxi);
    }
    return ans;
}

// second approach
// using sliding window technique
// T.C = O(n) S.C = O(n)

vector<int> slidingWindow(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> ans;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        if (!dq.empty() and dq.front() <= i - k)
        {
            dq.pop_front();
        }
        while (!dq.empty() and arr[dq.back()] <= arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i >= k - 1)
            ans.push_back(arr[dq.front()]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 3, -1, -3, 5, 3, 2, 1, 6};
    int k = 3;
    int n = arr.size();
    // vector<int> ans = bruteMaximum(arr, n, k);
    vector<int> ans = slidingWindow(arr, k);
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}