#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size, int i)
{
    if (i >= size)
    {
        return;
    }

    cout << arr[i] << " ";
    printArray(arr, size, i + 1);
}

int linearSearch(int arr[], int size, int index, int target)
{
    if (index >= size)
    {
        return -1;
    }
    if (arr[index] == target)
    {
        return index;
    }

    linearSearch(arr, size, index + 1, target);
}

void findMini(int arr[], int i, int n, int &mini)
{
    if (i >= n)
    {
        return;
    }

    mini = min(mini, arr[i]);
    findMini(arr, i + 1, n, mini);
}

void solve(int arr[], int ind, int size, vector<int> &ans)
{
    if (ind >= size)
    {
        return;
    }

    if (arr[ind] % 2 == 0)
    {
        ans.push_back(arr[ind]);
    }

    solve(arr, ind + 1, size, ans);
}

void findMaxi(int arr[],int index,int size,int& maxi){

    if(index >= size){
        return;
    }

    maxi = max(arr[index],maxi);

    findMaxi(arr,index+1,size,maxi);

}

void doubling(int arr[],int index,int size)
{
    if(index>=size)
    {
        return;
    }

    cout<< 2 * arr[index]<<" ";

    doubling(arr,index+1,size);
}

int main()
{

    int arr[] = {2, 100, 20, 30, 45};
    int size = 5;
    int index = 0;
    int target = 30;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    vector<int> ans;
    cout << "Index of the element : "<<linearSearch(arr, size, index + 1, target) << endl;
    printArray(arr, size, index);
    cout << endl;
    findMini(arr, index, size, mini);
    cout << "Minimum number is : " << mini << endl;
    findMaxi(arr,index,size,maxi);
    cout << "Maximum number is : " << maxi << endl;

    solve(arr, index, size, ans);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;

    doubling(arr,index,size);

    return 0;
}
