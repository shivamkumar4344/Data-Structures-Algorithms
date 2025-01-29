#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1,0,1,0,1,0,0};
    int k = 0;
    for(int i=0;i<arr.size();i++)
    {   
        if(arr[i] == 1)
        {
            k++;
        }
        else{
            k--;
        }
    }

    if(k==0){
        cout<<"Equal number of zeros and 1"<<endl;
    }
    else{
        cout<<"Not Equal number of zeros and 1"<<endl;
    }
}