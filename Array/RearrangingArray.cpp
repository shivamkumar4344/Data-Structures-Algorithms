// LC = 2149

// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

// You should return the array of nums such that the the array follows the given conditions:

// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.
//checking

#include<bits/stdc++.h>
using namespace std;

void rearrangeArray(vector<int>& nums)
{
    int n = nums.size();
    vector<int> pos;
    vector<int> neg;
    vector<int> ans;

    for(int i=0;i<n;i++)
    {
        if(nums[i] >= 0)
        {
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);
        }
    }
    int i = 0;
    int j = 0;
    while(i<pos.size() && j<neg.size())
    {
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
        i++;
        j++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}

int main()
{
    vector <int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(-2);
    v.push_back(-5);
    v.push_back(2);
    v.push_back(-4);
    int n = v.size();
    cout<<"Before Rearraging: "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    rearrangeArray(v);
    
}