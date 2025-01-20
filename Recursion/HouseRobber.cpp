#include <iostream>
#include <vector>
using namespace std;
// Should be solved using DP approach otherwise it will cause TLE 
// Maximum sum of non-adjacent elements
// Leetcode 198 - House Robber
int houseRobber(vector<int> &arr, int size, int index)
{
    if (index >= size)
    {
        return 0;
    }

    int ans1 = arr[index] + houseRobber(arr, size, index + 2);
    int ans2 = 0 + houseRobber(arr, size, index + 1);
    int final = max(ans1, ans2);
    return final;
}

int main()
{
    vector<int> arr = {4,5,7,1,2};
    int size = arr.size();
    int index = 0;
    cout<<"Final Answer is : "<<houseRobber(arr,size,index)<<endl;
    return 0;
}