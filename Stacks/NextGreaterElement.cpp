#include<bits/stdc++.h>
using namespace std;
//T.C - O(n^2).
int main()
{
    vector<int> arr = {6,0,8,1,3};
    int n = arr.size();
    vector<int> ans(n);
    //iterartive approach;
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=i+1;j<5;j++)
    //     {
    //         if(arr[j] > arr[i]){
    //             ans[i] = arr[j];
    //             break;
    //         }
    //     }
    // }

    //optimised approach in time O(n). and space complexity = O(n).
    stack<int> st;
    for(int i=n-1;i>=0;i--){

        while(!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }
        if(st.empty()){
        ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }

    for(int i=0;i<5;i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;

    return 0;
}