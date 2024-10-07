#include<bits/stdc++.h>
using namespace std;


int findOddOccuring(int arr[],int n)
{
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(s==e)
        {
            return s;
        }

        if(mid&1)
        {
            if(mid-1>=0 && arr[mid]==arr[mid-1])
            {
                s = mid+1;
            }
            else{
                e = mid - 1;
            }
        }
        else{
            if(mid+1<n && arr[mid] == arr[mid+1])
            {
                s = mid+2;
            }
            else{
                e = mid;
            }
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main()
{
    int arr[] = {4,4,4,4,5,3,3,3,3,3,3};
    int n = 11;

    int ansInd = findOddOccuring(arr,n);
    cout<<"Final ans is : "<<arr[ansInd]<<endl;
    return 0;

}