#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmaller(vector<int>& arr,int n)
{
    stack<int> st;
    vector<int> ans(n);
    st.push(-1);
    for(int i=n-1;i>=0;i--)
    {
        int curr = arr[i];
        while(st.top() >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);

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