#include <bits/stdc++.h>
using namespace std;

int KanpSackUsingRec(int capacity, vector<int> &profit, vector<int> &weight, int n, int index)
{
    if (index >= n)
        return 0;

    int inc = 0;
    int exc = 0;
    if (weight[index] <= capacity)
    {
        inc = profit[index] + KanpSackUsingRec(capacity - weight[index], profit, weight, n, index + 1);
    }
    exc = KanpSackUsingRec(capacity, profit, weight, n, index + 1);

    int ans = max(inc, exc);
    return ans;
}

int KanpSackUsingMemo(int capacity, vector<int> &profit, vector<int> &weight, int n, int index, vector<vector<int>> &dp)
{
    if (index >= n)
        return 0;

    int inc = 0;
    int exc = 0;
    if (weight[index] <= capacity)
    {
        inc = profit[index] + KanpSackUsingMemo(capacity - weight[index], profit, weight, n, index + 1, dp);
    }
    exc = KanpSackUsingMemo(capacity, profit, weight, n, index + 1, dp);

    dp[capacity][index] = max(inc, exc);
    return dp[capacity][index];
}

int main()
{
    int capacity = 50;
    vector<int> weight = {10, 20, 30};
    vector<int> profit = {60, 100, 120};
    int n = 3;
    int index = 0;
    vector<vector<int>> dp(capacity + 1, vector<int>(n + 1, -1));
    // int ans = KanpSackUsingRec(capacity,profit,weight,n,index);
    int ans2 = KanpSackUsingMemo(capacity, profit, weight, n, index, dp);
    cout << "Max Profit : " << ans2 << endl;
    return 0;
}