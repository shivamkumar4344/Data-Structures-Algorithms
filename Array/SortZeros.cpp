#include<bits/stdc++.h>
using namespace std;

void sort(vector<int>& arr,int n)
{
    int zC = 0;
    int oC = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0)
        {
            zC++;
        }
        if(arr[i]==1)
        {
            oC++;
        }
    }
    int i = 0;
    while(zC--)
    {
        arr[i] = 0;
        i++;
    }
    while(oC--){
        arr[i] = 1;
        i++;
    }
}

int main()
{
    vector<int>arr = {1,0,1,0,0,1};
    int n = arr.size();
    sort(arr,n);
    for(int it = 0; it<n; it++)
    {
        cout<<arr[it]<<" ";
    }cout<<endl;
}