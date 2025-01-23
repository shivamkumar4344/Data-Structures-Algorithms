#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{
    int index = s - 1;
    int pivot = arr[e];
    for (int j = s; j < e; j++)
    {
        if (arr[j] <= pivot)
        {
            index++;
            swap(arr[index], arr[j]);
        }
    }
    index++;
    swap(arr[index], arr[e]);
    return index;
}

void quickSort(vector<int> &arr, int s, int e)
{
    if (s > e)
    {
        return;
    }
    int pivot = partition(arr, s, e);
    quickSort(arr, s, pivot - 1);
    quickSort(arr, pivot + 1, e);
}

int main()
{
    vector<int> arr = {10,50,31,98,90,100,13,21,18};
    int s = 0;
    int e = arr.size() - 1;
    quickSort(arr, s, e);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}