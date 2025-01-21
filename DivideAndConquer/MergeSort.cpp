#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{

    int mid = (s + e) / 2;

    int leftLen = mid - s + 1;
    int rightLen = e - mid;

    int *left = new int[leftLen];
    int *right = new int[rightLen];

    int k = s;
    // copying values of arr to left array and right array.
    for (int i = 0; i < leftLen; i++)
    {
        left[i] = arr[k];
        k++;
    }

    for (int i = 0; i < rightLen; i++)
    {
        right[i] = arr[k];
        k++;
    }

    int i = 0;
    int j = 0;
    int p = s;
    // main merge logic
    while (i < leftLen && j < rightLen)
    {
        if (left[i] < right[j])
        {
            arr[p] = left[i];
            p++;
            i++;
        }
        else
        {
            arr[p] = right[j];
            p++;
            j++;
        }
    }
    // completely exhausting both the arrays.
    while (i < leftLen)
    {
        arr[p] = left[i];
        p++;
        i++;
    }
    while (j < rightLen)
    {
        arr[p] = right[j];
        p++;
        j++;
    }

    delete[] left;
    delete[] right;
}

void mergeSort(int arr[], int s, int e)
{

    // base cases
    if (s > e)
        return;

    if (s == e)
        return;

    int mid = (s + e) / 2; //->breaking the array

    //->sorting the array into left and right halves
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    //->merging the array.
    merge(arr, s, e);
}

int main()
{

    int arr[] = {2, 1, 6, 5, 4};
    int s = 0;
    int e = 4;
    cout << "Before applying merge sort: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr, s, e);
    cout << "After applying merge sort: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}