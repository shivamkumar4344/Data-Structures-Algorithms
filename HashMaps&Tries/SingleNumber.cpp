#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& arr)
{
    unordered_map<int,int> mp;
    int ans = 0;
    for(auto it:arr)
    {
        mp[it]++;
    }
    for(auto it:mp)
    {
        if(it.second == 1) 
            ans = it.first;
    }
    return ans;
}


int main()
{
    vector<int> arr = {4,1,2,1,2};
    cout<<"Single Number is : "<<singleNumber(arr)<<endl;
    return 0;
}