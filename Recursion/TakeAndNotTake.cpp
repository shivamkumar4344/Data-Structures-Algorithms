#include <iostream>
#include <vector>
using namespace std;

void takeOrNot(vector<int>& arr, vector<int>& temp, int idx)
{
    if (idx == arr.size())
    {
        for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
    }

    temp.push_back(arr[idx]);
    takeOrNot(arr, temp, idx + 1);
    temp.pop_back();
    takeOrNot(arr,temp,idx+1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 1, 2};
    vector<int> temp;
    int idx = 0;
    takeOrNot(arr, temp, idx);
    return 0;
}