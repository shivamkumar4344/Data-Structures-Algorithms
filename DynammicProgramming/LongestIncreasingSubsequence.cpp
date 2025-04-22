#include<bits/stdc++.h>
using namespace std;

int LISRecursion(vector<int>& arr,int curr,int prev)
{
    //base case
    if(curr >= arr.size())
        return 0;
    
    int inc = 0;
    if(prev == -1 || arr[curr] > arr[prev])
        inc = 1 + LISRecursion(arr,curr+1,curr);
    int exc = 0 + LISRecursion(arr,curr+1,prev);
    int ans = max(inc,exc);
    return ans;
}

int LISMemo(vector<int>& arr,int curr,int prev,vector<vector<int>>& dp)
{
    //base case
    if(curr >= arr.size())
        return 0;
    
    if(dp[curr][prev+1] != -1)
        return dp[curr][prev];
    
    int inc = 0;
    if(prev == -1 || arr[curr] > arr[prev])
        inc = 1 + LISMemo(arr,curr+1,curr,dp);
    int exc = 0 + LISMemo(arr,curr+1,prev,dp);
    int ans = max(inc,exc);
    dp[curr][prev+1] = ans;
}

int LISTabu(vector<int>& arr)
{
    int n = arr.size();
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));//this will handle the base case as it is initiaslising the dp array with 0
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i-1;j>=-1;j--)
        {
            int inc = 0;
            if(j == -1 || arr[i] > arr[j]){
                inc = 1 + dp[i + 1][i + 1];
            }
            int exc = dp[i + 1][j + 1];
            dp[i][j+1] = max(inc,exc);
        }
    }
    return dp[0][0];
}

int main()
{
    vector<int> arr = {10,9,2,5,3,7,101,18};
    int curr = 0;
    int prev = -1;
    vector<vector<int>> dp(arr.size()+1,vector<int>(arr.size()+1,-1));
    int ans = LISRecursion(arr,curr,prev);
    int ans2 = LISMemo(arr,curr,prev,dp);
    int ans3 = LISTabu(arr);
    cout<<"Answer is "<<ans3<<endl;
    return 0;
}