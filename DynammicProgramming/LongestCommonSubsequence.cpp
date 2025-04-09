/*LC -> 1143 Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

For example, "ace" is a subsequence of "abcde".
A common subsequence of two strings is a subsequence that is common to both strings.*/

#include<bits/stdc++.h>
using namespace std;

int solveUsingMemo(string& a,string& b,int i,int j,vector<vector<int>>& dp)
{
    //base case
    if(i >= a.length())
        return 0;
    if(j >= b.length())
        return 0;
    
    if(dp[i][j] != -1)
        return dp[i][j];
    
    int ans = 0;
    //match case
    if(a[i] == b[j]){
        ans = 1 + solveUsingMemo(a,b,i+1,j+1,dp);
    }
    else{
        //not match
        ans = max(solveUsingMemo(a,b,i+1,j,dp), solveUsingMemo(a,b,i,j+1,dp));
    }
    dp[i][j] = ans;
    return dp[i][j];
}

int solveUsingTabu(string a,string b)
{
    vector<vector<int>> dp(a.length()+1,vector<int>(b.length()+1,0));

    for(int i=a.length()-1;i>=0;i--)
    {
        for(int j=b.length()-1;j>=0;j--)
        {
            int ans = 0;
            if(a[i]==b[j])
            {
                ans = 1 + dp[i+1][j+1];
            }
            else{
                ans = max(dp[i][j+1],dp[i+1][j]);
            }
            dp[i][j] = ans;
        }
    }
    return dp[0][0];

}


int main()
{
    string a = "abcde";
    string b = "ace";
    int i = 0;
    int j = 0;
    //vector<vector<int>> dp(a.length()+1 , vector<int>(b.length()+1,-1));
    //int ans = solveUsingMemo(a,b,i,j,dp);
    int ans = solveUsingTabu(a,b);
    cout<<"Answer: "<<ans<<endl;
    return 0;

}
