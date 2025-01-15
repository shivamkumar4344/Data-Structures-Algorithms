#include <bits/stdc++.h>
using namespace std;

vector<int> TwoSum(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        if (arr[s] + arr[e] > target)
        {
            e--;
        }
        else if (arr[s] + arr[e] < target)
        {
            s++;
        }
        else
        {
            return {s, e};
        }
    }
}

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    int target = 26;
    vector<int>ans =  TwoSum(arr, target);
    for(auto it:ans){
        cout<<it<<" ";

    }cout<<endl;
}
