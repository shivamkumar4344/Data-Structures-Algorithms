#include<bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int> arr,int k)
{
    int n = arr.size();
    priority_queue<int> pq;
    for(int i=0;i<k;i++)
    {
        pq.push(arr[i]);
    }

    for(int i=k;i<n;i++)
    {
        int ele = arr[i];
        if(ele < pq.top())
        {
            pq.pop();
            pq.push(ele);
        }
    }

    return pq.top();
}

int main()
{
    vector<int> arr = {3,7,4,5,8,6,9};
    int k = 5;
    cout<<"Kth smallest element is : "<<kthSmallest(arr,k)<<endl;
    return 0;
}