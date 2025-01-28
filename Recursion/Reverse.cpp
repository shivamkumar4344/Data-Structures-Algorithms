#include<iostream>
using namespace std;

void reverse(int arr[],int s,int e)
{
    //base case
    if(s > e)
    {
        return;
    }

    swap(arr[s],arr[e]);
    reverse(arr,s+1,e-1);
}


int main()
{
    int arr[5] = {0,1,2,3,4};
    int s = 0;
    int e = 4;
    reverse(arr,s,e);

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}