#include <bits/stdc++.h>
using namespace std;
// 0-based indexing
void min_heapify(int arr[], int n, int index)
{
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int smallest = index;

    if (left < n && arr[smallest] > arr[left])
        smallest = left;

    if (right < n && arr[smallest] > arr[right])
        smallest = right;

    if (index != smallest)
    {
        swap(arr[smallest], arr[index]);
        min_heapify(arr, n, smallest);
    }
}

void buildHeap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        min_heapify(arr, n, i);
    }
}

int main()
{
    int arr[6] = {25, 20, 15, 5, 10, 12};
    buildHeap(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}