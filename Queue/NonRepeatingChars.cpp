#include <bits/stdc++.h>
using namespace std;
// This C++ program finds the first non-repeating character in a stream of characters and prints it dynamically as the string is processed.


int main()
{
    string str = "ababc";
    queue<char> q;
    int freq[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i]; 
        freq[ch - 'a']++;
        q.push(ch);

        while (!q.empty())
        {
            char frontCh = q.front();
            if (freq[frontCh - 'a'] > 1)
            {
                q.pop();
            }
            else
            {
                cout << frontCh << "->";
                break;
            }
        }

        if (q.empty())
        {
            cout << "#" << "->";
        }
    }
    return 0;
}
