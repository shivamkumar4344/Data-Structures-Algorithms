#include<bits/stdc++.h>
using namespace std;
int longestPalindromicMemo(string a,string rev,int i,int j,vector<vector<int>>& dp)
{
    rev = a;
    reverse(rev.begin(),rev.end());
    if(i >= a.length())
        return 0;
    if(j >= rev.length())
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];

    int ans = 0;
    if(a[i] = rev[j])
        ans = 1 +  longestPalindromicMemo(a,rev,i+1,j+1,dp);
    else
        ans = max(longestPalindromicMemo(a,rev,i+1,j,dp),longestPalindromicMemo(a,rev,i,j+1,dp));
    
    dp[i][j] = ans;
    return dp[i][j];
    
}
int main()
{
    string a = "aaaa";
    string rev = a;
    reverse(rev.begin(),rev.end());
    vector<vector<int>> dp(a.length()+1,vector<int>(rev.length()+1,-1));
    cout<<"Answer is : "<<longestPalindromicMemo(a,rev,0,0,dp);
    return 0;

}