#include<bits/stdc++.h>
using namespace std;
//0-based indexing
void heapify(int arr[],int n,int index)
{
    int left = 2*index+1;
    int right = 2*index+2;
    int largest = index;

    if(n > left && arr[left] > arr[largest]) largest = left;

    if(n > right && arr[right] > arr[largest]) largest = right;

    if(index != largest){
        swap(arr[index],arr[largest]);
        heapify(arr,n,largest);
    }
}

void buildHeap(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
}

void heapSort(int arr[],int n)
{
    while(n > 1)
    {
        swap(arr[0],arr[n-1]);
        n--;
        heapify(arr,n,0);
    }
}

int main()
{
    int arr[] = {5,10,15,20,25,12};
    buildHeap(arr,6);
    cout<<"Printing max heap: "<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    heapSort(arr,6);
    cout<<"Printing max heap sorted: "<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;

}