// Given an array, arr[] of rope lengths, connect all ropes into a single rope with the minimum total cost. The cost to connect two ropes is the sum of their lengths.
#include <bits/stdc++.h>
using namespace std;
int minCostRopes(vector<int> &arr)
{
    priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());

    // for(int i=0;i<arr.size();i++)
    // {
    //     pq.push(arr[i]);
    // }

    int minCost = 0;
    while (pq.size() > 1)
    {
        int min1 = pq.top();
        pq.pop();
        int min2 = pq.top();
        pq.pop();
        int sum1 = min1 + min2;
        minCost += sum1;
        pq.push(sum1);
    }
    return minCost;
}

int main()
{
    vector<int> arr = {4, 3, 2, 6};
    cout << "Minimum cost of the ropes : " << minCostRopes(arr) << endl;
    return 0;
}