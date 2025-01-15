#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& arr,int n){
    int left = 0;
    int i = 0;
    int right = n-1;
    while(i<=right)
    {
        if(arr[i]==0)
        {
            swap(arr[i],arr[left]);
            i++;
            left++;
        }
        else if(arr[i]==2)
        {
            swap(arr[i],arr[right]);
            right--;
        }
        else{
            i++;
        }
    }

}

int main()
{
    vector<int> arr = {1,0,2,2,1,0,1,0};
    int n = 8;
    sortColors(arr,n);
    for(auto it:arr){
        cout<<it<<" ";
    }cout<<endl;
    return 0;
}