#include<bits/stdc++.h>
using namespace std;

int findMinPivot(vector<int>& v)
{
    int s = 0;
    int n = v.size();
    int e = n-1;
    int mid = s+(e-s)/2;
    while (s<e)
    {
        if(v[mid] > v[e])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
    
}

int main()
{
    vector<int> v = {4,5,6,7,0,1,2};
    cout<<findMinPivot(v)<<endl;

}