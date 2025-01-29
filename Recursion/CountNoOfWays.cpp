#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int i,int k,int n)
{
    if(i == n)
    {
        if(k==0)
        {
            return 1;
        }
        return 0;
    }
    int ans = 0;
    ans += solve(arr,i+1,k-arr[i],n);
    ans += solve(arr,i+1,k,n);
    return ans;
}



int main()
{

    int arr[5] = {1,2,3,4,5};
    int i = 0;
    int k = 9;
    int n = 5;
    cout<<solve(arr,i,k,n)<<endl;

    return 0;
}