//LC 739 Daily Temperature
#include<bits/stdc++.h>
using namespace std;

vector<int> dailyTemp(vector<int>& temp)
{
    int n = temp.size();
    stack<int> st;
    vector<int> ans(n,0);
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && temp[i] > temp[st.top()])
        {
            int prevIdx = st.top();
            st.pop();
            ans[prevIdx] = i-prevIdx;
        }
        st.push(i);
    }
    return ans;
}

int main()
{
    vector<int> arr = {73,74,75,71,69,72,76,73};
    vector<int> ans = dailyTemp(arr);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }cout<<endl;
    return 0;
}
