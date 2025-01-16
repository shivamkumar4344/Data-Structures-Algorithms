#include<bits/stdc++.h>
using namespace std;
//better time complexity to O(n).
void mergeSorted(vector<int>& arr1 ,vector<int>& arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    int i=0;int j = 0;
    vector<int> ans;
    while(i<n && j<m)
    {
        if(arr1[i]<=arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while(i<n){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        ans.push_back(arr2[j]);
        j++;
    }
    
    for(auto it: ans)
    {
        cout<<it<<" ";
    }cout<<endl;

}

int main()
{
    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {2,5,6};
    mergeSorted(arr1,arr2);
    
}