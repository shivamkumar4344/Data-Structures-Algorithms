#include<bits/stdc++.h>
using namespace std;
// 1 0 0 0 1 0 0 1 k = 2
// 1 0 0 0 1 0 0 1 k = 2  number of subarrays where no.of 1's == k 
int countSubarr(vector<int>& arr,int k)
{
    unordered_map<int,int> mp;
    mp[0] = 1;
    int count1 = 0;
    int res = 0;
    for(int i:arr)
    {
        count1+=i;
        if(mp.find(count1-k) != mp.end() )
        {
            res+=mp[count1-k];
        }
        mp[count1]++;
    }
    return res;

}

int main()
{
    vector<int> arr = {1, 0, 0, 0, 1, 0, 0 ,1};
    int k = 2;
    int ans = countSubarr(arr,k);
    cout<<ans<<endl;
}