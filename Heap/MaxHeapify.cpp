#include<bits/stdc++.h>
using namespace std;
//0-based indexing
void max_heapify(int arr[],int n,int index)
{
    int left = 2*index+1;
    int right = 2*index+2;
    int largest = index;

    if(n >= left && arr[largest] < arr[left]) largest = left;
    if(n >= right && arr[largest] < arr[right]) largest = right;

    if(index != largest)
    {
        swap(arr[index],arr[largest]);
        // index = largest;
        max_heapify(arr,n,largest);
    }
}

void buildHeap(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        max_heapify(arr,n,i);
    }
}

int main()
{
    int arr[6] = {5,10,15,20,25,12};
    buildHeap(arr,6);
    for(int i=1;i<=6;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}