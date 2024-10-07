// Bubble Sort
// T.C = O(n^2)

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> arr = {22, 56, 78, 1, 0, -1, 90, 87};
    cout << "Before sorting: - " << endl;
    printArray(arr);
    cout << "After sorting:- " << endl;
    bubbleSort(arr);
    printArray(arr);
    return 0;
}