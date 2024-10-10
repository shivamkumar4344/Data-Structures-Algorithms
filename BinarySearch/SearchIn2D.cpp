#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int row = 3;
    int col = 4;
    int n = row*col;
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int target = 80;
    bool found = false;
    while(s<=e)
    {
        int rowInd = mid/col;
        int colInd = mid%col;
        int curr = arr[rowInd][colInd];

        if(curr == target)
        {
            found = true;
            break;
        }
        else if(target > curr)
        {
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }

    if(found)
    {
        cout<<"founded"<<endl;
    }
    else{
        cout<<"not founded"<<endl;
    }

    return 0;
    
}
