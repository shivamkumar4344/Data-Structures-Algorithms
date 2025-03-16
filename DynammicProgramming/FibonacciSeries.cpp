#include<bits/stdc++.h>
using namespace std;

int solveUsingMemo(int n,vector<int>& dp)
{
    if(n==1 || n== 0) return n;

    if(dp[n] != -1) return dp[n];

    int ans = solveUsingMemo(n-1,dp) + solveUsingMemo(n-2,dp);
    return ans;
}

int solveUsingTabulation(int n)
{
    vector<int> dp(n+1,-1);
    dp[0] = 0;
    if(n == 0) return dp[0];
    dp[1] = 1;

    for(int i=2 ; i<=n ; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main()
{
    int n = 6;
    vector<int> dp(n+1,-1);
    cout<<n<<" th Fibonacci number by Memoization is : "<<solveUsingMemo(n,dp)<<endl;
    cout<<n<<" th Fibonacci number by Tabulation is : "<<solveUsingTabulation(n)<<endl;
    return 0;
}