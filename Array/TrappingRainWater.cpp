// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6
// Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
#include<bits/stdc++.h>
using namespace std;
int trap(vector<int>& arr)
{
    int l = 0;
    int r = arr.size() - 1;//6
    int leftMax = arr[l];//4
    int rightMax = arr[r];//5
    int res = 0;
    while(l < r)// 0 < 5 , 1 < 5 , 2 < 5 , 3 < 5  ,  4 < 5 
    {
        if(leftMax < rightMax) // 4 < 5 , 4 < 5 , 4 < 5 , 4 < 5 , 4 < 5
        {
            l++;//1 , 2 , 3 , 4
            leftMax = max(leftMax,arr[l]); //4 , 4 , 4 , 
            res += leftMax - arr[l] ; // 2 + 4 +  1 + 2  
        }
        else{
            r--;
            rightMax = max(rightMax,arr[r]);
            res += rightMax - arr[r];
        }
    }
    return res; // 9
}
int main()
{
    vector<int> arr = {4,2,0,3,2,5};
    cout<<"Answer : "<<trap(arr)<<endl;
    return 0;
}