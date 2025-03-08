// GFG - K-th Largest Sum Contiguous Subarray

// You are given an array arr. You have to find the K-th largest sum of contiguous subarray within the array elements. In other words, overall subarrays, find the subarray with kth largest sum and return its sum of elements.
#include <bits/stdc++.h>
using namespace std;

int kthLargestSum(vector<int> &arr, int k)
{
    int n = arr.size();
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if (pq.size() < k)
                pq.push(sum);

            else
            {
                if (sum > pq.top())
                {
                    pq.pop();
                    pq.push(sum);
                }
            }
        }
    }
    return pq.top();
}

int main()
{
    vector<int> arr = {3, 2, 1};
    int k = 2;

    cout << "Largest kth subarray sum is : " << kthLargestSum(arr, k) << endl;

    return 0;
}