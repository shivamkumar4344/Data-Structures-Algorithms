#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {-2,1,3,-3,2,5,0,-1};
    int currSum = 0;
    int maxSum = arr[0];
    for(int i=0;i<arr.size();i++)
    {
        currSum += arr[i];
        if(currSum > maxSum){
            maxSum = max(currSum,maxSum);
        }
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<maxSum<<endl;
}