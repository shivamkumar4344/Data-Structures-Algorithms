// LC - 2965. Find Missing and Repeated Values
// You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. Each integer appears exactly once except a which appears twice and b which is missing. The task is to find the repeating and missing numbers a and b.

// Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.
#include <bits/stdc++.h>
using namespace std;
vector<int> findMissingAndRepeated(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = n * n;
    int totalSum = (m * (m + 1)) / 2;

    int sum = 0;
    vector<int> ans(2);
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int num = arr[i][j];
            sum += num;
            mp[num]++;

            if (mp[num] == 2)
            {
                ans[0] = num;
            }
        }
    }

    ans[1] = totalSum - (sum - ans[0]);
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}};
    vector<int> ans = findMissingAndRepeated(arr);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}