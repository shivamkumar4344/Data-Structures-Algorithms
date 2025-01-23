#include <iostream>
using namespace std;
//same as house robber problem
int maximumSum(int arr[], int index, int size)
{
    if (index >= size)
    {
        return 0;
    }

    // exclusion
    int ans1 = arr[index] + maximumSum(arr, index + 2, size);
    int ans2 = 0 + maximumSum(arr, index + 1, size);

    int finalAns = max(ans1, ans2);
    return finalAns;
}

int main()
{

    int arr[] = {4, 5, 3, 2, 1};
    int size = 5;
    int index = 0;
    cout << "Maximum sum of adjacent elements are: " << maximumSum(arr, index, size) << endl;
    return 0;
}