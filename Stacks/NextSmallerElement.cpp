#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmaller(vector<int>& arr,int n)
{
    stack<int> st;
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() and st.top() >= arr[i])
        {
            st.pop();
        }
        if(st.empty())
        {
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {2,1,4,3};
    int n = 4;
    vector<int> ans = nextSmaller(arr,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;


    return 0;
}