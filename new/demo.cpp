// Problem Statement:
// Given an integer array arr, remove a subarray (can be empty) from arr such that the remaining elements in arr are non-decreasing.

// Return the length of the shortest subarray to remove.

// A subarray is a contiguous subsequence of the array.

// Input: arr = [1,2,3,10,4,2,3,5]
// Output: 3
// Explanation: The shortest subarray we can remove is [10,4,2] of length 3. The remaining elements after that will be [1,2,3,3,5] which are sorted.
// Another correct solution is to remove
// the subarray [3,10,4].

// Input: arr = [5,4,3,2,1]
// Output: 4
// Explanation: Since the array is strictly decreasing, we can only keep a single element. Therefore we need to remove a subarray of length 4, either [5,4,3,2] or [4,3,2,1].

// minimal lenght of the subaaray which ones removed from the main array makes the main array sorted
#include<bits/stdc++.h>
using namespace std;

int findingLength(vector<int>& arr)
{
    int n = arr.size();

    if(n==0) return 0;

    int left = 0;
    int right = n-1;

    while(left +1 < n && arr[left] <= arr[left+1]  )
        left++;
    //this will checks that the array is already sorted
    if(left == n-1) return 0;

    while(right > 0 && arr[right-1] <=arr[right])
        right--;
    
    //remove everything between suffix and prefix
    int res = min(n-left+1,right);

    //merge suffix and prefix both
    int i = 0;
    int j = right;
    while(i<= left && j < n)
    {
        if(arr[i] <= arr[j]){
            res = min(res,j-i-1);
            i++;
        }
        else{
            j++;
        }

    }
    return res;
}

int main()
{
    vector<int> arr = {1,2,3,10,4,2,3,5};
    vector<int> secondArr = {5,4,3,2,1};
    vector<int> thirdArr = {1,2,5,3,4};
    vector<int> fourthArr = {};
    vector<int> fifthArr = {5,6,7,8,9};
    cout<<"Minimal length: "<<findingLength(arr)<<endl;
    cout<<"Minimal length for second test case: "<<findingLength(secondArr)<<endl;
    cout<<"Minimal length for third test case: "<<findingLength(thirdArr)<<endl;
    cout<<"Minimal length for fourth test case: "<<findingLength(fourthArr)<<endl;
    cout<<"Minimal length for fifth test case: "<<findingLength(fifthArr)<<endl;
    return 0;
}