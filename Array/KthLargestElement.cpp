#include<bits/stdc++.h>
using namespace std;

vector<int> kthLargest(vector<int>& arr,int k)
{
    int n = arr.size();
    sort(arr.begin(),arr.end(),greater<int>());
    vector<int> ans;
    int i = 0;
    while(k != 0)
    {
        ans.push_back(arr[i]);
        i++;
        k--;
    }
    return ans;
}

int main()
{
    vector<int> arr = {12,5,787,1,23};
    int k = 2;
    vector<int> ans = kthLargest(arr,k);
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}