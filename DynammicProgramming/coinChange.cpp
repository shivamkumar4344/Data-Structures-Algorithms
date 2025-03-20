#include<bits/stdc++.h>
using namespace std;
int solveUsingMemo(vector<int>& coins,int amount,vector<int>& dp)
{
    if(amount == 0)
        return 0;

    if(dp[amount] != -1) 
        return dp[amount];
    
    int mini = INT_MAX;
    for(int i=0;i<coins.size();i++)
    {
        if(amount-coins[i] >= 0)
        {
            int rec = solveUsingMemo(coins,amount-coins[i],dp);
            if(rec != INT_MAX)
            {
                int ans = 1 + rec;
                mini = min(mini,ans);
            }
        }
    }
    dp[amount] = mini;
    return dp[amount];
}

int solveUsingTabulation(vector<int>& coins,int amount)
{
    //create dp
    int n = amount;
    vector<int> dp(n+1 , INT_MAX);
    //base case analyzation
    dp[0] = 0;

    
    for(int i=1;i<=n;i++)
    {
        int mini = INT_MAX;
        for(int j=0;j<coins.size();j++)
        {
            if(i-coins[j] >= 0)
            {
                int rec = dp[i-coins[j]];
                if(rec != INT_MAX){
                    int ans = 1 + rec;
                    mini = min(mini,ans);
                }
            }
        }
        dp[i] = mini;
    }
    return dp[amount];
}

int main()
{
    vector<int> coins = {1,2,5};
    int amt = 11;
    vector<int> dp(amt+1,-1);
    cout<<"Minimum number of coins to make up the amount : "<<solveUsingMemo(coins,amt,dp)<<endl;

    cout<<"Minimum number of coins to make up the amount : "<<solveUsingTabulation(coins,amt)<<endl;
    return 0;

}