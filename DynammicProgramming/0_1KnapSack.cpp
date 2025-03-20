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

int knapSackUsingTabu(int capacity,vector<int>& profit,vector<int>& weight,int n)
{
    vector<vector<int>> dp(capacity+1,vector<int>(n+1,-1));//creation of dp array
    //initialisation of dp array
    for(int i=0;i<=capacity;i++)
    {
        dp[i][n] = 0;
    }
    for(int i=0;i<=capacity;i++)
    {
        for(int j = n-1;j>=0;j--)
        {
            int inc = 0;
            if(weight[j] <= i)
            {
                inc = profit[j] + dp[i-weight[j]][j+1];
            }
            int exc = 0 + dp[i][j+1];
            dp[i][j] = max(inc,exc);
        }

    }
    return dp[capacity][0];
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
    // int ans2 = KanpSackUsingMemo(capacity, profit, weight, n, index, dp);
    int ans3 = knapSackUsingTabu(capacity,profit,weight,n);
    cout << "Max Profit : " << ans3 << endl;
    return 0;
}