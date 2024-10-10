#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[],int n)
{
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid =  (s+e)/2;
    while(s<=e)
    {
        
        int diff = arr[mid] - mid;
        if(diff == 1)
        {
            s = mid + 1;
        }
        else{
            ans = mid;
            e = mid - 1;
        }
        mid = (s+e)/2;
    }

    if(ans+1 == 0)
    {
        return n+1;
    }

    return ans+ 1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    cout<<"Missing number is : "<<missingNumber(arr,n)<<endl;
    
}




