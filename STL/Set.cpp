#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout<<"Enter array size: ";
    cin >> n;
    cout<<endl;
    int arr[n];
    cout<<"Enter array values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<int> s;
    unordered_set<int> us;
    multiset<int> ms;

    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
        us.insert(arr[i]);
        ms.insert(arr[i]);
    }

    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;

    for (auto it : us)
    {
        cout << it << " ";
    }
    cout << endl;

    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
