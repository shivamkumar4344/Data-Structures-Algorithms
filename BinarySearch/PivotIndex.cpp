#include <bits/stdc++.h>
using namespace std;
int findPivot(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
        {
            return s;
        }

        if(arr[mid-1] > arr[mid])
        {
            return mid - 1;
        }
        else if(arr[mid] > arr[mid+1])
        {
            return mid;
        }
        else if(arr[0] > arr[mid])
        {
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{

    vector<int> v;
    v.push_back(12);
    v.push_back(14);
    v.push_back(16);
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    int ans = findPivot(v);
    cout<<ans<<endl;

    return 0;
}
