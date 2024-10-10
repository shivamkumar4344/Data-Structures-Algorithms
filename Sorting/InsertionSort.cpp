//TC = O(n^2)
//Insertion sort

#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}


void InsertionSort(vector<int>& v)
{
    int n = v.size();
    for(int i=1;i<n;i++)
    {
        int j = i-1;
        int key = v[i];
        while(j>=0 && v[j]>key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}

int main()
{
    vector<int> v = {44,33,55,22,11};
    cout<<"After sorting in ascending order : - ";
    InsertionSort(v);
    printArray(v);
    return 0;
}