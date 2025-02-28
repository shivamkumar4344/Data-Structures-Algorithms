#include<bits/stdc++.h>
using namespace std;
void reverseArr(vector<int>& arr,int s,int e)
{
    if(s > e) return;

    swap(arr[s],arr[e]);
    reverseArr(arr,s+1,e-1);
}

void leftRotate(vector<int>& arr,int d)
{
    int n = arr.size();
    d = d%n;

    reverseArr(arr,0,d-1);
    reverseArr(arr,d,n-1);
    reverseArr(arr,0,n-1);
}

void rightRotate(vector<int>& arr,int d)
{
    int n = arr.size();
    d = d%n;
    reverseArr(arr,n-d,n-1);
    reverseArr(arr,0,n-d-1);
    reverseArr(arr,0,n-1);

}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    rightRotate(arr,2);
    for(auto it:arr)
    {
        cout<<it<<" ";
    }cout<<endl;
    return 0;

}