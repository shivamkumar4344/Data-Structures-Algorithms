#include <bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[], int index, int size)
{
    if (index >= size)
    {
        return true;
    }

    if (arr[index] > arr[index - 1])
    {
        bool ans = checkSorted(arr, index + 1, size);
        return ans;
    }
    else
    {
        return false;
    }
}

int binarySearch(int arr[], int s, int e, int target)
{
    if (s > e)
    {
        return -1;
    }

    int mid = s + (e - s) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }

    if (arr[mid] > target)
    {
        return binarySearch(arr, s, mid - 1, target);
    }
    else
    {
        return binarySearch(arr, mid + 1, e, target);
    }
}

int main()
{
    int arr[] = {0,10, 20, 30, 40};
    int size = 5;
    int index = 1;

    cout << checkSorted(arr, index, size) << endl;

    cout << "Index found through binary search is : " << binarySearch(arr, 0, 4, 40) << endl;
    return 0;
}